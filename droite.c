#include "libft.h"

t_coord		droite(t_coord point1, t_coord point2)
{
	t_coord	droite;

	droite.x = (point1.y - point2.y) / (point1.x - point2.x);
	droite.y = point2.y - droite.x * point2.x;
	return (droite);
}

t_coord		perpendiculaire(t_coord droite, t_coord intersection)
{
	t_coord	perp;

	perp.x = -1 / droite.x;
	perp.y = intersection.y - (perp.x * intersection.x);
	return (perp);
}
