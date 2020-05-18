#include "libft.h"
#include <stdio.h>
int	ft_buffcount(t_buff *buff)
{
	int	count;
	t_buff	*tmp;

	if (buff == NULL)
		return (0);
	count = 0;
	tmp = buff;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
