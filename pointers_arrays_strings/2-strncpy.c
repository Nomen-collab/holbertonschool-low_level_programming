#include "main.h"

/**
 * _strncpy - Copie jusqu'à n caractères d'une chaîne de caractères
 * @dest: Chaîne de destination
 * @src: Chaîne source à copier
 * @n: Nombre maximal de caractères à copier de src
 *
 * Return: Pointeur vers la chaîne de destination `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

