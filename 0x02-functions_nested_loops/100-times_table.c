#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The n times.
 *
 * Return: void.
 **/
void print_times_table(int n)
{
	int i = 0, j;

	if (n < 0 || n > 15)
		return;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			if ((i * j) < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((i * j) + '0');
			}
			else if ((i * j) < 100)
			{
				_putchar(' ');
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else
			{
				_putchar(((i * j) / 100) + '0');
				_putchar((((i * j) / 10) % 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
