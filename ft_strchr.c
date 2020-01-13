/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:09:16 by lmalki-h          #+#    #+#             */
/*   Updated: 2019/11/07 15:12:59 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char data;

	data = (char)c;
	while (*s)
	{
		if (*s == data)
			return ((char *)s);
		s++;
	}
	if (data == '\0')
		return ((char *)s);
	return (NULL);
}
