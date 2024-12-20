#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value in the range (inclusive).
 * @max: The maximum value in the range (inclusive).
 *
 * Return: A pointer to the newly created array,
 * or NULL if min > max or malloc fails.
 */
int	*array_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

