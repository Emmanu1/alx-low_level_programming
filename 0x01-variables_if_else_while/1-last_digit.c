#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - start programm
 *Description: find out if the last digit of a number is greater than 5
 *Return: return 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %ld and is greatr than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %ld and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %ld and is less than 5\n", n, ld);
	}
	return (0);
}
