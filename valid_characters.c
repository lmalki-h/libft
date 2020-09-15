/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_characters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:53:55 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/14 09:53:59 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	has_valid_characters(char *line, char *validcharacters)
{
	int	i;

	i = 0;
	while (line[i] != '\0')
	{
		if (!inset(line[i], validcharacters))
			return (0);
		i++;
	}
	return (1);
}
