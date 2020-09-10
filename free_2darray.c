#include "libft.h"

void	free_2darray(char**array)
{
	char	*curr;
	char	*to_free;

	curr = *array;
	while (curr != NULL)
	{
		to_free = curr;
		curr++;
		free(to_free);
	}
	array = NULL;
}
