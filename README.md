libag - Bibliothèque de fonctions
---------------------------------

La bibliothèque _libag_ complète la _[libft][]_ en y ajoutant des fonctions bonus.

## Utilisation et compilation

_libag_ utilise des fonctions de la [Libft][] et a besoin de son header pour pouvoir être compilé. Il faut fournir au _Makefile_ le chemin vers le dossier le contenant à l'aide de la variable *LIBFT_INC*.

	$> make LIBFT_INC=../libft/includes all

La documentation peut être créée avec la commande suivante :

	$> make doxygen

La documentation est générée grâce à [Doxygen][]. Le _Makefile_ utilise l'alias `doxygen` pour faire appel à l'exécutable, mais si celui-ci n'est pas défini il faut utiliser la commande :

	$> make doxygen DOXYGEN=/CHEMIN/VERS/EXECUTABLE/DE/DOXYGEN

## Fonctions

### - Gestion de liste

- `ft_lstagnew` : Création d'un maillon : allocation de la taille nécessaire et initialisation des chmaps.
- `ft_lstagadd` : Ajout d'un maillon en tête de liste

### - Gestion de mémoire

- `ft_memrealloc` : Réallocation d'une zone de mémoire. Copie de l'ancienne dans la nouvelle.


[Libft]: https://github.com/aguerin42/libft.git
[Doxygen]: https://github.com/doxygen/doxygen
