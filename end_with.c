/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_with.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:42:45 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/14 09:43:02 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	end_with(char *file_name, char const *end)
{
	size_t	len;
	size_t	end_len;

	len = ft_strlen(file_name);
	end_len = ft_strlen(end);
	if (end_len > len)
		return (0);
	return (!ft_strncmp(file_name + (len - end_len), end, len));
}
