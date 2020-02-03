/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:51:17 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/02/03 12:03:45 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			print_2_bytes(int c, int fd)
{
	int		copy;
	char	char_1;
	char	char_2;

	copy = c;
	copy = copy >> 6;
	copy = copy | TWO_BYTES_F;
	char_1 = copy;
	char_2 = last_byte(c);
	ft_putchar_fd(char_1, fd);
	ft_putchar_fd(char_2, fd);
}

void			print_3_bytes(int c, int fd)
{
	int		copy;
	char	char_1;
	char	char_2;
	char	char_3;

	copy = c;
	copy = copy >> 12;
	copy = copy | THREE_BYTES_F;
	char_1 = copy;
	char_2 = before_last_byte(c);
	char_3 = last_byte(c);
	ft_putchar_fd(char_1, fd);
	ft_putchar_fd(char_2, fd);
	ft_putchar_fd(char_3, fd);
}

void			print_4_bytes(int c, int fd)
{
	int		copy;
	char	char_1;
	char	char_2;
	char	char_3;
	char	char_4;

	copy = c;
	copy = copy >> 18;
	copy = copy | FOUR_BYTES_F;
	char_1 = copy;
	copy = c;
	copy = copy >> 12;
	copy = copy & SIX_UNITS;
	copy = copy | REST_BYTES;
	char_2 = copy;
	char_3 = before_last_byte(c);
	char_4 = last_byte(c);
	ft_putchar_fd(char_1, fd);
	ft_putchar_fd(char_2, fd);
	ft_putchar_fd(char_3, fd);
	ft_putchar_fd(char_4, fd);
}

void			ft_putwchar_fd(int c, int fd)
{
	int		nb_bits;
	int		nb_bytes;

	nb_bits = count_bits(c);
	nb_bytes = get_bytes(nb_bits);
	if (nb_bytes == 1)
		ft_putchar_fd((char)c, fd);
	else if (nb_bytes == 2)
		print_2_bytes(c, fd);
	else if (nb_bytes == 3)
		print_3_bytes(c, fd);
	else
		print_4_bytes(c, fd);
}
