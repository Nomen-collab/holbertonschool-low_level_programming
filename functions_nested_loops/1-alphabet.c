#include "main.h"

/**
 *	print_alphabet - affiche l'alphabet en minuscules suivi d'une nouvelle ligne
 */
void	print_alphabet(void)
{
	char	c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

