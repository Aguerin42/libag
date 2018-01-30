/**
**	\file	ft_lstagdel.c
**	\author	Alexis Guérin
**	\date	30 janvier 2019
**
**	\brief	Suppression d'une liste
*/

#include "libag.h"

/**
**	\brief	Suppression d'une liste
**
**	La fonction supprime la liste `alst` et libère la mémoire en faisant appel à
**	la fonction `del` sur chaque maillon.
**
**	ft_lstagdelone() est appelé sur chaque maillon de la liste.
**
**	\param	alst	- pointeur sur la tête de liste à supprimer
**	\param	del		- fonction de suppression du champ `content`
*/

void	ft_lstagdel(t_lstag **alst, void (*del)(void *, size_t))
{
	if (*alst)
	{
		ft_lstagdel(&((*alst)->next), del);
		ft_lstagdelone(&(*alst), del);
	}
}
