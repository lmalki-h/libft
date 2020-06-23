/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:07:11 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/06/09 15:52:06 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buff		*ft_buffnew(char *content)
{
	t_buff	*new;

	if ((new = (t_buff *)ft_calloc(1, sizeof(t_buff))) == NULL)
		return (NULL);
	new->content = ft_strdup(content);
	new->next = NULL;
	return (new);
}
