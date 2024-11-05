#include "main.h"

/**
 * _memset - Remplit une zone de mémoire avec un octet constant
 * @s: Pointeur vers la zone de mémoire à remplir
 * @b: Octet constant à utiliser
 * @n: Nombre d'octets à remplir
 *
 * Return: Pointeur vers la zone de mémoire remplie
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

