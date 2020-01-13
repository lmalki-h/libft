/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:12:38 by lmalki-h          #+#    #+#             */
/*   Updated: 2019/11/12 10:57:06 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	data;
	char	*str;
	int		len;

	data = (char)c;
	str = (char *)s;
	len = ft_strlen(str);
	if (data == '\0')
		return (&str[len]);
	while (len)
	{
		if (str[len - 1] == data)
			return (&str[len - 1]);
		len--;
	}
	return (NULL);
}
