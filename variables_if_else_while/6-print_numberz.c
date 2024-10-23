#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, without using any char variables.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}

