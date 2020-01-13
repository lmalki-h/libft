/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:22:43 by lmalki-h          #+#    #+#             */
/*   Updated: 2019/11/05 10:33:07 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	data;

	str = (unsigned char *)s;
	data = (unsigned char)c;
	while (n)
	{
		if (*str == data)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
