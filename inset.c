/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 15:20:51 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/07/29 16:18:44 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		inset(int c, char *validchar)
{
	int	i;

	i = 0;
	while (validchar[i] != '\0')
	{
		if (c == validchar[i])
			return (1);
		i++;
	}
	return (0);
}
