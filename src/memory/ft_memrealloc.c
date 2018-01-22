/**
**	\file	ft_memrealloc.c
**	\author	Alexis Guérin
**	\date	12 décembre 2018
*/

#include "libag.h"

/**
**	\brief	Réallocation de mémoire avec copie
**
**	La fonction alloue une nouvelle zone de mémoire de taille _newsize_ et copie
**	_old_ dans le nouveau pointeur. La mémoire de _old_ est libérée.
**
**	Si _oldsize_ est plus grand que la taille de _old_, le comportement est
**	indéterminé.
**
**	Voir : ft_memalloc() et ft_memcpy() de la [libft][].
**	[Libft]: https://github.com/aguerin42/libft.git
**/

void	*ft_memrealloc(void *old, size_t oldsize, size_t newsize)
{
	void	*new;

	if ((new = ft_memalloc(newsize)))
		new = ft_memcpy(new, old, oldsize);
	ft_memdel(&old);
	return (new);
}
