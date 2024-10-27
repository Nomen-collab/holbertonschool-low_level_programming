#include "main.h"

/**
 *	_islower - vérifie si un caractère est en minuscule
 *	@c: caractère à vérifier
 *
 *	Return: 1 si le caractère est en minuscule, 0 sinon
 */
int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

