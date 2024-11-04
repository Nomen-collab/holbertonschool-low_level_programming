#include "main.h"

/**
 * _strlen - Retourne la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne de caractères
 *
 * Return: Longueur de la chaîne
 */
int	_strlen(char *s)
{
	int	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
