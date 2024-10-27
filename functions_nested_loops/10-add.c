#include "main.h"
#include <stdio.h>

/**
 * add - adds two integers and returns the resul.
 *
 * Return : 0 (Success)
 */
int main(void)
{
	int result;

	result = add(3, 5);
	_putchar('0' + result);
	_putchar('\n');

	return (0);
}
