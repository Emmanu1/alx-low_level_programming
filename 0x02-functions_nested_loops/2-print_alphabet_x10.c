#include "main.h"
/**
 * main - Start point
 * Description: 'prints _putchar'
 * Return: returns zero
 */
void print_alphabet_x10(void)
{
	char b;
	int i;

	i = 0;

	while (i < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		i++;
	}
}
