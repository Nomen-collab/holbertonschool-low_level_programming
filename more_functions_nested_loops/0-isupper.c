#include "main.h"

/**
 * main - Point d'entrée du programme
 *
 * Return: 0 en cas de succès
 */
int main(void)
{
	int c;

	c = 'A';
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(_isupper(c) + '0');
	_putchar('\n');

	c = 'a';
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(_isupper(c) + '0');
	_putchar('\n');

	return (0);
}

