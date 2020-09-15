/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_2darray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:54:56 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/14 09:55:42 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_2darray(char **array)
{
	char	*curr;
	char	*to_free;

	curr = *array;
	while (curr != NULL)
	{
		to_free = curr;
		curr++;
		free(to_free);
	}
	array = NULL;
}
