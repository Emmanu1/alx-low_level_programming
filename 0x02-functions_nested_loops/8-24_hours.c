#include "main.h"
/**
 * jack_bauer - prints minutes of jacks day
 * from 00:00 to 23:59
 * Return: returns zero
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
