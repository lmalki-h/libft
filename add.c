/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:13:15 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/01/15 12:13:47 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	add(char c, char *tab)
{
	int		i;

	i = 0;
	while (tab[i] != '\0')
		i++;
	tab[i] = c;
}
