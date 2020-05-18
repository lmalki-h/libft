#include "libft.h"

int	ft_lstcount(t_list *lst)
{
	int	count;
	t_list	*tmp;

	if (lst == NULL)
		return (0);
	count = 0;
	tmp = lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
