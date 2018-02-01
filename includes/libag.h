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
**	memory
*/

void			*ft_memrealloc(void *old, size_t oldsize, size_t newsize);

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
t_lstag			*ft_lstagnew(void const *content, size_t content_size);
void			ft_lstagdelone(t_lstag **alst, void (*del)(void *, size_t));
void			ft_lstagdel(t_lstag **alst, void (*del)(void *, size_t));
int				ft_lstagcountelem(t_lstag *list);
void			ft_lstagiter(t_lstag *lst, void (*f)(t_lstag *elem));
t_lstag			*ft_lstagtail(t_lstag *list);
t_lstag			*ft_lstagmapif(t_lstag *lst, int (*f)(t_lstag*),
											void (add)(t_lstag**, t_lstag*));

/*
**	print
*/

int				ft_putxchar(char c, int x);

/*void			ft_lstiter_if(t_list *lst, void (*f)(void*), int (t)(void*));
t_list			*ft_lstfind(t_list *lst, int f(void*));
t_list			*ft_lstfind_prev(t_list *lst, int f(void*));
t_list			*ft_lstfind_tail(t_list *list);

int				ft_nbrlen(long nb);
int				ft_isspace(int c);
void			ft_swap(char *a, char *b);
int				ft_putnbrl(int n);
int				ft_putnbrs(int n);
int				ft_putcharl(char c);
int				ft_putchars(char c);
int				ft_putstrs(char const *str);
int				ft_factorial(int nb);
int				ft_sqrt(int nb);
int				ft_count_word(char const *str, char c);
char			*ft_strfreejoin(char *s1, char *s2);
void			ft_lstaddend(t_list **alst, t_list *new);
t_list			*ft_lstaddnew(void const *content, size_t content_size,
								t_list *list);
t_list			*ft_lstaddalpha(t_list **alst, t_list *new);
void			ft_lstiter_reverse(t_list *lst, void (*f)(t_list *elem));
void			fill_tab(int tab[], unsigned int size, int value);
int				ft_putcharl_fd(char c, int fd);

char			*ft_itoa_base(unsigned long nb, int base);
int				ft_putnbr_long(long long int n);
char			*ft_itoa_long(long long n);
int				ft_atoi_base(const char *str, int base);
long long int	ft_pow(int nb, unsigned int pow);
int				ft_putwchar(long c);
int				ft_putwstr(wchar_t *str);
int				ft_islowercase(char	c);
int				ft_isuppercase(char c);
int				ft_putwcharl(long c);
int				ft_putwchars(long c);
int				ft_putwendl(wchar_t *str);
int				ft_putwstrs(wchar_t *str);
int				ft_putnstr(const char *str, unsigned int n);
int				ft_putnstrs(const char *str, unsigned int n);
int				ft_putwnchar(wchar_t *str, unsigned int n);
int				ft_putstrupper(const char *str);
int				ft_putstrlower(const char *str);
unsigned long	ft_strwlen(wchar_t *str);
int				ft_putxchar(char c, int x);
int				ft_putxwchar(wchar_t c, int x);
int				ft_strwbytlen(wchar_t *str);
int				ft_charwbytlen(wchar_t c);
char			*ft_strtolower(char *str);
char			*ft_strtoupper(char *str);
int				ft_is_valid_char(char *valid, char c);

int				ft_lstany(t_list *list, int f(void*));
int				ft_lstcount_if(t_list *list, int f(void*));
int				ft_lstcount_all(t_list *list, int f(void*));
void			ft_perror(const char *message, const int value);

void			ft_strdeldouble(char **str);
int				ft_strlendouble(char **doublestr);
*/
#endif
