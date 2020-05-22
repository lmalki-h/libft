#include "libft.h"

double	distance(double start_x, double start_y, double end_x, double end_y)
{
	return (sqrt((start_x - end_x) *(start_x - end_x) + (start_y - end_y) * (start_y - end_y)));
}
