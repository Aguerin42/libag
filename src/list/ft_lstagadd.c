/**
**	\file	ft_lstagadd.c
**	\author	Alexis Guérin
**	\date	29 janvier 2018
**
**	\brief	Insertion d'un maillon
*/

#include "libag.h"

/**
**	\brief	Insertion d'un maillon en tête
**
**	Insert un maillon en debut de liste.
**
**	\param	alst	- pointeur sur la tête de liste
**	\param	new		- nouveau maillon à insérer
*/

void	ft_lstagadd(t_lstag **alst, t_lstag *new)
{
	t_lstag *lst;

	if (alst)
	{
		lst = *alst;
		lst->prev = new;
		new->next = lst;
		*alst = new;
	}
}

/**
**	\brief	Insertion d'un maillon en queue
**
**	Insert un maillon en fin de liste.
**
**	\param	alst	- pointeur sur la tête de liste
**	\param	new		- nouveau maillon à insérer
*/

void	ft_lstagaddtail(t_lstag **alst, t_lstag *new)
{
	t_lstag	*tail;

	if (alst)
	{
		tail = ft_lstagtail(*alst);
		ft_lstagadd(&new, tail);
	}
}
