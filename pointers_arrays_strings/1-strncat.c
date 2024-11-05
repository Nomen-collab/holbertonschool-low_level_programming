#include "main.h"

/**
 * _strncat - Concatèn deux  cha�nes en utilisant au max n octets de src
 * @dest: Chaîne de destination
 * @src: Chaîne sourcea ajoutea la fin de dest
 * @n: Nombre maximal de caractèresa utiliser de src
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

