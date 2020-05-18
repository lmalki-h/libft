/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufflast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:38:02 by lmalki-h          #+#    #+#             */
/*   Updated: 2019/11/18 10:32:15 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buff		*ft_bufflast(t_buff *buff)
{
	t_buff	*last;

	if (buff == NULL)
		return (NULL);
	last = buff;
	while (last->next != NULL)
		last = last->next;
	return (last);
}
