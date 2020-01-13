/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:34:16 by lmalki-h          #+#    #+#             */
/*   Updated: 2019/11/12 10:53:55 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		len;
	char				*ret;
	unsigned int		i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	if ((ret = ft_calloc(len + 1, sizeof(char))) == NULL)
		return (NULL);
	while (i < len)
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	return (ret);
}
