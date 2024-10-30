#include "main.h"
/**
 * print_line - Dessine une ligne dans le terminal.
 * @n: Le nombre de fois ou le caractere '_' doit etre imprime.
 *
 * Return: rien.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
