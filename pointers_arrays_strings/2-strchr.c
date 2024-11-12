#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character to locate
 * Return: pointer to the first occurrence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *result = NULL;

	while (*s)
	{
		if (*s == c)
		{
			result = s;
			break;
		}
		++s;
	}
	if (c == '\0')
		result = s;
	return (result);
}

