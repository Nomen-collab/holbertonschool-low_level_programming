#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			int spaces = 0;

			while (spaces < i)
			{
				_putchar('	');
				spaces++;
			}

			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}

