#include "main.h"

/**
 * leet - Encode une chaîne en utilisant le langage 1337
 * @str: Pointeur vers la chaîne à encoder
 *
 * Return: Pointeur vers la chaîne encodée
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char map[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; map[j] != '\0'; j++)
		{
			if (str[i] == map[j])
			{
				str[i] = replace[j];
				break;
			}
		}
		i++;
	}

	return (str);
}

