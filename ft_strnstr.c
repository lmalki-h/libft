/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:17:43 by lmalki-h          #+#    #+#             */
/*   Updated: 2019/11/14 13:55:11 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	char		*s;
	size_t		len_needle;

	i = 0;
	s = (char *)haystack;
	len_needle = ft_strlen(needle);
	if (!*needle)
		return (s);
	while (s[i] && (i + len_needle) <= len)
	{
		if (s[i] == needle[0])
		{
			if (ft_memcmp(&s[i], needle, len_needle) == 0)
				return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
