#include "libft.h"

t_coord		perpendiculaire(t_coord droite, t_coord intersection)
{
	t_coord	perp;

	perp.x = -1 / droite.x;
	perp.y = intersection.y - (perp.x * intersection.x);
	return (perp);
}
