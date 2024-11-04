#include "main.h"

/**
 * puts2 - Affiche un caractère sur deux d'une cha�ne
 * @str: Pointeur vers la chaîne de caractèr a afficher
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
}

