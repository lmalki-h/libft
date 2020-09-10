#include "libft.h"

int	has_valid_characters(char *line, char *validcharacters)
{
	int	i;

	i = 0;
	while (line[i] != '\0')
	{
		if (!inset(line[i], validcharacters))
			return (0);
		i++;
	}
	return (1);
}
