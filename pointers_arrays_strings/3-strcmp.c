#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères
 * @s1: Première chaîne à comparer
 * @s2: Deuxième chaîne à comparer
 *
 * Return: 0 si s1 et s2 sont égales, un nombre positif si s1 > s2,
 *         un nombre négatif si s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}

