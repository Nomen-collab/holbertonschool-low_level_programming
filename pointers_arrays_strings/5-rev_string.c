#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères
 * @s: Pointeur vers la chaîne de caractèr a inverser
 */
void	rev_string(char *s)
{
	int	length, i;
	char	temp;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
