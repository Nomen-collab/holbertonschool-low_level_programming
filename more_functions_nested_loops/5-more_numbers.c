#include "main.h"

/**
 * more_numbers - imprime 10 fois les nombres de 0 a 14.
 *
 * Description: cette fonction imprime les chiffres de 0 a 14 dix foi
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}