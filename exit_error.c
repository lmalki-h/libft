#include "libft.h"

int		exit_error(char *message)
{
		write(1, message, ft_strlen(message));
		exit(0);
}

