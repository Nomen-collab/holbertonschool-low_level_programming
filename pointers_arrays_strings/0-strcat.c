#include "main.h"

/**
 * _strcat - Concatène deux cha�e de carateres
 * @dest: Chaîne de destination
 * @src: Chaîne source a ajouter a la fin de dest
 *
 * Return: Pointeur vers la chaîne de destination `dest`
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

