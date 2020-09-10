#include "libft.h"

int		return_error(char *message)
{
	write(1, message, ft_strlen(message));
	return (-1);
}
