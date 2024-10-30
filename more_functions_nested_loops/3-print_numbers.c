#include "main.h"

/**
 * print_numbers - imprime les chiffres de 0 a 9
 *
 * Return: always 0
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
