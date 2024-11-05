#include "main.h"

/**
 * string_toupper - Convertit toutes les lettres min en maj
 * @str: Pointeur vers la chaîne à modifier
 *
 * Return: Pointeur vers la chaîne modifiée
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}

	return (str);
}

