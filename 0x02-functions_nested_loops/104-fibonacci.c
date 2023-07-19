#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 1, b = 2, fib;

	printf("%lu, %lu, ", a, b);

	while (i < 96)
	{
		fib = a + b;
		printf("%lu", fib);
		a = b;
		b = fib;

		if (i != 95)
			printf(", ");

		i++;
	}

	printf("\n");

	return (0);
}
