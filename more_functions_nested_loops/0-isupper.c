#include "main.h"

/**
 * _isupper - Vérifie si le caractère est en majuscule
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est une majuscule, 0 sinon
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

