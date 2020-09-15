/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   droite.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:44:19 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/14 09:44:34 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_coord		droite(t_coord point1, t_coord point2)
{
	t_coord	droite;

	droite.x = (point1.y - point2.y) / (point1.x - point2.x);
	droite.y = point2.y - droite.x * point2.x;
	return (droite);
}
