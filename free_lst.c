/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:44:02 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/14 09:44:05 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_lst(t_list *alst)
{
	t_list *curr;
	t_list *to_free;

	curr = alst;
	while (curr != NULL)
	{
		to_free = curr;
		curr = curr->next;
		free(to_free->content);
		free(to_free);
		to_free = NULL;
	}
}
