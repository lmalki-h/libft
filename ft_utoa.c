/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 16:57:05 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/01/12 17:02:52 by lmalki-h         ###   ########.fr       */
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

char				*ft_utoa(unsigned int n)
{
	int					size;
	char				*ret;
	long unsigned int	num;

	num = (long unsigned int)n;
	size = get_size(num);
	if ((ret = ft_calloc(size + 1, sizeof(char))) == NULL)
		return (NULL);
	if (num == 0)
		ret[0] = '0';
	else
	{
		while (num > 0)
		{
			ret[size - 1] = (num % 10) + '0';
			num /= 10;
			size--;
		}
	}
	return (ret);
}
