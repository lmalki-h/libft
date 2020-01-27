/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:38:18 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/01/27 14:11:13 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		get_size(intmax_t n)
{
	size_t	size;

	size = 0;
	if (n == 0)
	{
		size = 1;
	}
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

static	int			ft_isnegative(intmax_t n)
{
	int		sign;

	sign = 0;
	if (n < 0)
		sign = 1;
	return (sign);
}

char				*ft_itoa(intmax_t n)
{
	int			sign;
	int			size;
	char		*ret;
	intmax_t	num;

	num = n;
	if ((sign = ft_isnegative(num)) == 1)
		num *= -1;
	size = get_size(num);
	if ((ret = ft_calloc(size + sign + 1, sizeof(char))) == NULL)
		return (NULL);
	if (num == 0)
		ret[0] = '0';
	else
	{
		while (num > 0)
		{
			ret[size + sign - 1] = (num % 10) + '0';
			num /= 10;
			size--;
		}
		if (sign)
			ret[size] = '-';
	}
	return (ret);
}
