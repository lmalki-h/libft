/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 11:55:56 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/02/03 15:36:11 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putwstr(wchar_t *s, int fd)
{
	int		i;
	int		nb_bits;
	int		nb_bytes;

	i = 0;
	while (s[i] != '\0')
	{
		nb_bits = count_bits((int)s[i]);
		nb_bytes = get_bytes(nb_bits);
		ft_putwchar_fd(s[i], fd);
		i += nb_bytes;
	}
}
