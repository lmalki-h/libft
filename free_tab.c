#include "libft.h"

char	**free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
		free(tab[i++]);
	if (tab)
		free(tab);
	return (NULL);
}
