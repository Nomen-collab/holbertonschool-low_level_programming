#include "main.h"

/**
 * _strcpy - Copie une chaîne de caractères de src vers dest
 * @dest: Pointeur vers le tampon où la chaîne sera copiée
 * @src: Pointeur vers la chaîne sourc a copier
 *
 * Return: Pointeur vers dest
 */
char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
