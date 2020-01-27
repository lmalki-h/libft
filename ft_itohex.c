/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 18:14:27 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/01/24 17:03:44 by lmalki-h         ###   ########.fr       */
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
		n /= 16;
	}
	return (size);
}

char				*ft_itohex(uintmax_t num)
{
	int			size;
	char		*hex;

	size = get_size(num);
	if ((hex = ft_calloc(size + 1, sizeof(char))) == NULL)
		return (NULL);
	else
	{
		if (num == 0)
			hex[0] = '0';
		while (num > 0)
		{
			if ((num % 16) > 9)
				hex[size - 1] = (num % 16) + 'a' - 10;
			else
				hex[size - 1] = (num % 16) + '0';
			num /= 16;
			size--;
		}
	}
	return (hex);
}
