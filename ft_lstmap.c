/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:32:39 by lmalki-h          #+#    #+#             */
/*   Updated: 2019/11/21 12:08:58 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;
	t_list	*first;

	if (!lst || !f)
		return (NULL);
	if ((new = ft_lstnew(f(lst->content))) == NULL)
		return (NULL);
	first = new;
	current = lst->next;
	while (current != NULL)
	{
		if ((new->next = ft_lstnew(f(current->content))) == NULL)
		{
			ft_lstclear(&first, del);
			return (first);
		}
		new = new->next;
		current = current->next;
	}
	new = NULL;
	return (first);
}
