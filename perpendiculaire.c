/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perpendiculaire.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:51:44 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/14 09:51:51 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_coord		perpendiculaire(t_coord droite, t_coord intersection)
{
	t_coord	perp;

	perp.x = -1 / droite.x;
	perp.y = intersection.y - (perp.x * intersection.x);
	return (perp);
}
