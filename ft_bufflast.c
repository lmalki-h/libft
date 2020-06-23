/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufflast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 14:54:03 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/06/09 14:54:16 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buff	*ft_bufflast(t_buff *buff)
{
	t_buff	*last;

	if (buff == NULL)
		return (NULL);
	last = buff;
	while (last->next != NULL)
		last = last->next;
	return (last);
}
