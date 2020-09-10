/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:56:31 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/06/09 15:29:02 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_lst_with_fd(t_list **alst, int fd)
{
	t_list	*curr;

	curr = *alst;
	if ((*alst)->fd == fd)
	{
		free((*alst)->content);
		*alst = (*alst)->next;
		free(curr);
	}
	else
	{
		while (curr != NULL && curr->fd == fd)
		{
			curr = curr->next;
		}
		if (curr != NULL)
		{
			free(curr->content);
			free(curr);
		}
	}
}

int		ft_strncut(t_list *lst, char **line, int ret, t_list **alst)
{
	char	*delim;

	if ((delim = ft_strchr(lst->content, '\n')) != NULL)
	{
		if ((*line = ft_substr(lst->content, 0,
						(delim - (char*)lst->content))) == NULL)
			return (-1);
		ft_strlcpy(lst->content, delim + 1, ft_strlen(lst->content) + 1);
		return (1);
	}
	else
	{
		if (ret == 0)
		{
			if ((*line = ft_substr(lst->content, 0, ft_strlen(lst->content))) == NULL)
				return (-1);
			free_lst_with_fd(alst, lst->fd);
			return (0);
		}
	}
	return (0);
}

char		*ft_update(char *s1, char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;
	char	*s;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);	
	i = 0;
	if ((s = (char *)ft_calloc(len_s1 + len_s2 + 1, sizeof(char))) == NULL)
		return (NULL);
	while (i < len_s1)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len_s2)
	{
		s[i + j] = s2[j];
		j++;
	}
	free(s1);
	return (s);
}

t_list		*get_lst(int fd, t_list **alst)
{
	t_list	*tmp;

	tmp = *alst;
	while (tmp)
	{
		if (tmp->fd == fd)
			return (tmp);
		tmp = tmp->next;
	}
	if ((tmp = (t_list *)ft_calloc(1, sizeof(t_list))) == NULL)
		return (NULL);
	tmp->fd = fd;
	if ((tmp->content = (char *)ft_calloc(1, sizeof(char))) == NULL)
		return (NULL);
	tmp->next = *alst;
	*alst = tmp;
	return (tmp);
}

int		get_next_line(int fd, char **line)
{
	char		buf[BUFFER_SIZE + 1];
	static t_list	*alst;
	t_list		*lst;
	int		ret;
	int		ret2;

	if (fd < 0 || !line || read(fd, buf, 0) < 0 || BUFFER_SIZE < 1)
		return (-1);
	lst = get_lst(fd, &alst);
	while ((ret = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if ((lst->content = ft_update(lst->content, buf)) == NULL)
			return (-1);
		if ((ret2 = ft_strncut(lst, line, ret, &alst)) != 0)
			return (ret2);
	}
	return (ft_strncut(lst, line, ret, &alst));
}
