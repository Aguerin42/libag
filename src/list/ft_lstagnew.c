/**
**	\file	ft_lstagnew.c
**	\author	Alexis Guérin
**	\date	29 janvier 2018
*/

#include "libag.h"

/**
**	\brief	Création d'un maillon
**
**	La fonction alloue la taille nécessaire pour un maillon de la liste
**	[t_lstag][] ainsi que pour ses champs.
**	`content` et `content_size` sont copiés dans les champs correspondants et
**	`prev` et `next` sont initalisés à `NULL`.
**
**	[t_lstag]: structs__lstag.html
**
**	\param	content	- 		variable à stocker
**	\param	content_size -	taille nécessaire au stockage de la variable
**
**	\return	**maillon alloué** ou **NULL** en cas d'erreur
*/

t_lstag	*ft_lstagnew(void const *content, size_t content_size)
{
	t_lstag	*list;

	if ((list = (t_lstag*)malloc(sizeof(t_lstag))))
	{
		if (!content)
		{
			list->content = NULL;
			list->content_size = 0;
		}
		else
		{
			if (!(list->content = malloc(sizeof(content) * content_size)))
			{
				free(list);
				return (NULL);
			}
			ft_memcpy(list->content, content, content_size);
			list->content_size = content_size;
		}
		list->prev = NULL;
		list->next = NULL;
	}
	return (list);
}