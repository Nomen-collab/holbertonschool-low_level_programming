#include "main.h"

/**
 *	_abs - calcule la valeur absolue d'un entier
 *	@n: entier à évaluer
 *
 *	Return: la valeur absolue de n
 */
int	_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

