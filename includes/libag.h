/**
**	\file	libag.h
**	\author	Alexis Guérin
**	\date	22 janvier 2018
*/
#ifndef LIBAG_H
# define LIBAG_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

/*
**	list
*/

/**
** \brief	Structure pour les listes
**
** \param	content			- Variable pour le stockage d'une valeur
** \param	content_size	- Taille de la variable
** \param	prev			- Pointeur sur le maillon précédent
** \param	next			- Pointeur sur le maillon suivant
*/

typedef struct	s_lstag
{
	void			*content;	/*!< Variable pour le stockage d'une variable */
	size_t			content_size;	/*!< Taille de la variable */
	struct s_lstag	*prev;		/*!< Pointeur sur le maillon précédent */
	struct s_lstag	*next;		/*!< Pointeur sur le maillon suivant */
}				t_lstag;

void			ft_lstagadd(t_lstag **alst, t_lstag *new);
void			ft_lstagaddtail(t_lstag **alst, t_lstag *new);
t_lstag			*ft_lstagnew(void const *content, size_t content_size);
void			ft_lstagdelone(t_lstag **alst, void (*del)(void *, size_t));
void			ft_lstagdel(t_lstag **alst, void (*del)(void *, size_t));
int				ft_lstagcountelem(t_lstag *list);
void			ft_lstagiter(t_lstag *lst, void (*f)(t_lstag *elem));
t_lstag			*ft_lstagtail(t_lstag *list);
t_lstag			*ft_lstagmapif(t_lstag *lst, int (*f)(t_lstag*),
											void (add)(t_lstag**, t_lstag*));

/*
**	memory
*/

void			*ft_memrealloc(void *old, size_t oldsize, size_t newsize);

/*
**	print
*/

int				ag_putcharl(char c);
int				ag_putchars(char c);
int				ag_putxchar(char c, int x);
int				ag_putchars_fd(char c, int fd);
int				ag_putcharl_fd(char c, int fd);
int				ag_putnbrl(int n);
int				ag_putnbrs(int n);
int				ag_putnbrl_fd(int n, int fd);
int				ag_putnbrs_fd(int n, int fd);

#endif
