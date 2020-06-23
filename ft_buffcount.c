/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 14:51:13 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/06/09 15:57:20 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_buffcount(t_buff *buff)
{
	int	count;
	t_buff	*tmp;

	count = 0;
	if (buff == NULL)
		return (0);
	tmp = buff;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
