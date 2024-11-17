#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Retourne un pointeur vers un espace mémoire alloee,
 * contenant une copie de la chaîne passée en paramètre.
 * @str: La chaîne de caractères à dupliquer.
 *
 * Return: Pointeur vers la chaîne dupliquée, ou NULL en cas d'erreur.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}

