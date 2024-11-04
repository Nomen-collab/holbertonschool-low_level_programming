#include "main.h"

/**
 * swap_int - change les valeurs de deux entiers
 * @a: Pointeur vers le premier entier
 * @b: Pointeur vers le deuxième entier
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
