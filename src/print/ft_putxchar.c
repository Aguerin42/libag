#include "libag.h"

/**
**	\brief	Affichage d'un caractère _x_ fois.
**
**	\param	c	- caractère à afficher
**	\param	x	- nombre de fois à afficher le caractère
**
**	\return	**nombre de fois** que le caractère a été affiché
**			ou **-1** en cas d'erreur
*/

int	ft_putxchar(char c, int x)
{
	int	i;

	i = -1;
	while (++i < x)
		write(1, &c, 1);
	return (i);
}
