#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractèresa l'envers
 * @s: Pointeur vers la chaîne de caractèrea afficher
 */
void	print_rev(char *s)
{
	int	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
