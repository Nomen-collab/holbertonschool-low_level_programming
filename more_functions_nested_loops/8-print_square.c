#include "main.h"

/**
 * print_square - Prints a square of size 'size'.
 * @size: The size of the square to be printed.
 *
 * Description: If size is 0 or less, the function only prints a new line.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

