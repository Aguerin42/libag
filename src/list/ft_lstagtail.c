/**
**	\file	ft_lstagtail.c
**	\author	Alexis Guérin
**	\date	31 janvier 2018
*/

#include "libag.h"

/**
**	\brief	Renvoie la queue de liste
**
**	La fonction parcourt la liste et renvoie le dernier maillon.
**
**	\param	list	- liste
**
**	\return	pointeur sur la **queue de la liste** ou **NULL** en cas d'erreur
*/

t_lstag	*ft_lstagtail(t_lstag *list)
{
	while (list && list->next)
		list = list->next;
	return (list);
}
