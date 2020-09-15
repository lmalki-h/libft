/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:45:00 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/14 09:45:07 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_coord		inter2d(t_coord droite1, t_coord droite2)
{
	t_coord	intersection;

	intersection.x = (droite1.y - droite2.y) / (droite2.x - droite1.x);
	intersection.y = droite2.x * intersection.x + droite2.y;
	return (intersection);
}
