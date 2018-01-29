/**
**	\file	ft_lstagadd.c
**	\author	Alexis Guérin
**	\date	29 janvier 2018
*/

#include "libag.h"

/**
**	\brief	Insertion d'un maillon
**
**	Insert un maillon en debut de liste.
**
**	\param	alst	- pointeur sur la tête de liste
**	\param	new		- nouveau maillon à insérer
*/

void	ft_lstagadd(t_lstag **alst, t_lstag *new)
{
	t_lstag *lst;

	lst = *alst;
	lst->prev = new;
	new->next = lst;
	*alst = new;
}
