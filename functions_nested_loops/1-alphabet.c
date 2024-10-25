#include "main.h"

/**
 * print_alphabet - Imprime l'alphabet en minuscules
 *
 * Descritpion: Cette fonction utilise _putchar pour imprimer
 * chaque lettre de l'alphabet en minuscules + une nouvelle ligne
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	_putchar('\n');
}
