/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_patoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:20:12 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/01/31 17:20:34 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_patoi(char **s)
{
	int			sign;
	long int	ret;
	int			i;

	sign = 1;
	ret = 0;
	i = 0;
	while (ft_isspace(**s))
		(*s)++;
	if (**s == '-' || **s == '+')
		(*s)++;
	while (ft_isdigit(**s))
	{
		if (ret < 0 && sign == -1)
			return (0);
		else if (ret < 0 && sign == 1)
			return (-1);
		ret *= 10;
		ret += (**s - '0');
		(*s)++;
	}
	return ((int)(ret * sign));
}
