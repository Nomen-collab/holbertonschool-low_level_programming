#include "main.h"

/**
 * _isdigit - V�rifie si le caractere c est un chiffre.
 * @c: le caractere a verifier
 *
 * Return: 1 si c'est un chiffre, 0 sinon
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
