#include "main.h"

/**
 * puts_half - Affiche la seconde moitié d'une chaîne de caractères
 * @str: Pointeur vers la chaîne de caractèresa afficher
 */
void	puts_half(char *str)
{
	int	length, start;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2 + 1;
	}
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}

