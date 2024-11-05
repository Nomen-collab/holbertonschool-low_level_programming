#include "main.h"

/**
 * _strncat - Concatène deux chaînes en utilisant au maximum n octets de src
 * @dest: Chaîne de destination
 * @src: Chaîne source à ajouter à la fin de dest
 * @n: Nombre maximal de caractères à utiliser de src
 *
 * Return: Pointeur vers la chaîne de destination `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

