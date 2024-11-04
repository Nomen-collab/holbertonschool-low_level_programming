#include "main.h"
#include <limits.h>

/**
 * _atoi - Convertit une chaîne de caractères en entier
 * @s: Pointeur vers la chaîne à convertir
 *
 * Return: L'entier converti ou 0 si aucune conversion n'est possible
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			i++;
			continue;
		}
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			sign *= 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > (INT_MAX / 10) ||
			    (result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (result > 0)
		{
			break;
		}
		i++;
	}

	return (result * sign);
}

