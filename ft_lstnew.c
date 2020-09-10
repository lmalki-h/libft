/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:07:11 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/08/19 07:59:12 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*new;

	if ((new = ft_calloc(1, sizeof(t_list))) == NULL)
		return (NULL);
	new->content = ft_strdup((char *)content);
	free(content);
	new->next = NULL;
	return (new);
}
