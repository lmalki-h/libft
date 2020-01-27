/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capitalize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 18:04:01 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/01/09 18:17:17 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	capitalize(char *s)
{
	if (s)
	{
		while (*s)
		{
			if (*s >= 'a' && *s <= 'z')
				*s -= 32;
			s++;
		}
	}
}