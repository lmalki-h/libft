/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 15:07:47 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/14 09:48:10 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	distance(t_coord a, t_coord b)
{
	double	distance;

	distance = hypot((a.x - b.x), (a.y - b.y));
	return (distance);
}
