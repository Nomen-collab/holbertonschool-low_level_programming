#include "main.h"
#include <stdlib.h>

/**
 * create_array - Crée un tableau de caractèr spec
 * @size: Taille du tableau.
 * @c: Caractère utilisé pour initialiser le tableau.
 *
 * Return: Pointeur vers le tableau ou NULL en cas d'échec ou si size est 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

