#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all possible different combinations
 * of two two-digit numbers
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		if (i != 0)
			l = 0;
		else
			l = 1;
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (; l <= 9; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i != 9 && j != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
