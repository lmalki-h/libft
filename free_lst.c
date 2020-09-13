#include "libft.h"

void	free_lst(t_list *alst)
{
	t_list *curr;
	t_list *to_free;

	curr = alst;
	while (curr != NULL)
	{
		to_free = curr;
		curr = curr->next;
		free(to_free->content);
		free(to_free);
		to_free = NULL;
	}
}
