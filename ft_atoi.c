/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:24:05 by lmalki-h          #+#    #+#             */
/*   Updated: 2019/11/20 09:42:35 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
				|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int			sign;
	long int	ret;
	long int	i;

	sign = 1;
	ret = 0;
	i = 0;
	while (ft_isblank(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		if (ret < 0 && sign == -1)
			return (0);
		else if (ret < 0 && sign == 1)
			return (-1);
		ret *= 10;
		ret += (str[i] - '0');
		i++;
	}
	return ((int)(ret * sign));
}
