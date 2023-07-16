#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all possible different combinations
 * of two digits
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

