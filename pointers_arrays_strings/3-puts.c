#include "main.h"

/**
 * _puts - Affiche une chaîne de caractères suivie d'une nouvelle ligne
 * @str: Pointeur vers la chaîne de caractèr
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
