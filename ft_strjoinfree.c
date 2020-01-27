/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:43:52 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/01/24 19:18:09 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoinfree(char *s1, char *s2, int n)
{
	char	*p1;
	char	*p2;
	char	*s;

	p1 = s1;
	p2 = s2;
	s = ft_strjoin(s1, s2);
	if (n == 1)
		free(p1);
	else if (n == 2)
		free(p2);
	else if (n == 3)
	{
		free(p1);
		free(p2);
	}
	return (s);
}
