#include "libft.h"

int		inset(int c, char *validchar)
{
	int	i;

	i = 0;
	while (validchar[i] != '\0')
	{
		if (c == validchar[i])
			return (1);
		i++;
	}
	return (0);
}
