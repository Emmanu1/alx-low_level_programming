#include "main.h"

/**
 *print_alphabet - Print the alphabet, lowercase
 *Return: always zero
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
