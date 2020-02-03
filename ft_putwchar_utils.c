/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 16:21:26 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/02/03 11:54:57 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_bits(int c)
{
	int		count;

	count = 0;
	while (c)
	{
		c = c >> 1;
		count++;
	}
	return (count);
}

int		get_bytes(int nb_bits)
{
	if (nb_bits <= 7)
		return (1);
	else if (nb_bits <= 11)
		return (2);
	else if (nb_bits <= 16)
		return (3);
	else
		return (4);
}

int		last_byte(int c)
{
	int copy;

	copy = c;
	copy = copy & SIX_UNITS;
	copy = copy | REST_BYTES;
	return (copy);
}

int		before_last_byte(int c)
{
	int		copy;

	copy = c;
	copy = copy & TWELVE_UNITS;
	copy = copy >> 6;
	copy = copy | REST_BYTES;
	return (copy);
}
