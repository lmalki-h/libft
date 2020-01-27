/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:41:52 by lmalki-h          #+#    #+#             */
/*   Updated: 2019/11/20 10:18:09 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (alst && !*alst)
		*alst = new;
	else if (alst && *alst)
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
}