#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)

{
	char l;
	int i = 0;

	while (i <= 9)
	{
	while (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
	_putchar('\n');
	i++;
	}
}	
