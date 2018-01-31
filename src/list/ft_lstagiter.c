/**
**	\file	ft_lstagiter.c
**	\author	Alexis Guérin
**	\date	31 janvier 2018
*/

#include "libag.h"

/**
**	\brief	Application de fonction sur une liste
**
**	ft_lstagiter() applique la fonction `f` sur chaque maillon de la list `lst`.
**
**	\param	lst		- list
**	\param	elem	- fonction à appliquer
*/

void	ft_lstagiter(t_lstag *lst, void (*f)(t_lstag *elem))
{
	t_lstag	*lst1;

	lst1 = lst;
	while (lst1)
	{
		f(lst1);
		lst1 = lst1->next;
	}
}
