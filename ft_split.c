/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 11:03:52 by lmalki-h          #+#    #+#             */
/*   Updated: 2019/11/21 12:00:56 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		word_count(char const *s, char c)
{
	size_t	ret;
	int		i;

	ret = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			ret++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (ret);
}

static	char		**free_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	if (tab)
		free(tab);
	return (NULL);
}

char				**ft_split(char const *s, char c)
{
	char		**tab;
	char		*curr;
	char		*delim;
	size_t		i;

	i = 0;
	if (!s || (tab = ft_calloc(word_count(s, c) + 1, sizeof(char *))) == NULL)
		return (NULL);
	curr = (char *)s;
	while (*curr == c)
		curr++;
	while ((delim = ft_strchr(curr, c)) && i < word_count(s, c))
	{
		if ((tab[i] = ft_substr(curr, 0, delim - curr)) == NULL)
			return (free_tab(tab));
		i++;
		curr = delim;
		while (*curr == c)
			curr++;
	}
	if (delim == NULL && *curr != '\0')
		if ((tab[i] = ft_substr(curr, 0, ft_strlen(curr))) == NULL)
			return (free_tab(tab));
	return (tab);
}