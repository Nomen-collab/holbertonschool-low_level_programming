#include "main.h"

/**
 *	times_table - imprime la table de multiplication par 9
 */
void	times_table(void)
{
	int	i;
	int	product;

	for (i = 0; i <= 9; i++)
	{
		product = 9 * i;
		if (i == 0)
		{
			_putchar(product + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			if (product < 10)
			{
				_putchar(' ');
			}
			_putchar(product + '0');
		}
	}
	_putchar('\n');
}

