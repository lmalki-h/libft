/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:38:18 by lmalki-h          #+#    #+#             */
/*   Updated: 2019/11/07 17:32:44 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		get_size(long int n)
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

static	int			ft_isnegative(int n)
{
	int		sign;

	sign = 0;
	if (n < 0)
		sign = 1;
	return (sign);
}

char				*ft_itoa(int n)
{
	int			sign;
	int			size;
	char		*ret;
	long int	num;

	num = (long int)n;
	if ((sign = ft_isnegative(n)) == 1)
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
