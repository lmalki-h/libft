/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 14:50:08 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/06/09 14:50:28 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_buffadd_back(t_buff **alst, t_buff *new)
{
	t_buff	*last;

	if (alst && !*alst)
		*alst = new;
	else if (alst && *alst)
	{
		last = ft_bufflast(*alst);
		last->next = new;
	}
}
