#include "main.h"

/**
 * _atoi - Convertit une chaîne de caractères en entier
 * @s: Pointeur vers la chaîne à convertir
 *
 * Return: L'entier converti ou 0 si aucune conversion n'est possible
 */
int _atoi(char *s)
{
	int i, sign, result, num_started;

	i = 0;
	sign = 1;
	result = 0;
	num_started = 0;

	while (s[i] != '\0')
	{
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
			num_started = 1;
			result = result * 10 + (s[i] - '0');
			if (sign == -1 && result > 0)
			{
				result = -result;
			}
		}
		else if (num_started)
		{
			break;
		}
		i++;
	}
	return (result);
}

