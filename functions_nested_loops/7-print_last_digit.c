#include "main.h"

/**
 *	print_last_digit - imprime le dernier chiffre d'un nombre
 *	@n: nombre à évaluer
 *
 *	Return: la valeur du dernier chiffre
 */
int	print_last_digit(int n)
{
	int	last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');
	return (last_digit);
}

