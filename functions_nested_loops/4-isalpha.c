#include "main.h"

/**
 *	_isalpha - vérifie si un caractère est une lettre
 *	@c: caractère à vérifier
 *
 *	Return: 1 si c est une lettre (majuscule ou minuscule), 0 sinon
 */
int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

