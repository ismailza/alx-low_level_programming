#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet in lowercase 10 times.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 97;
		while (j <= 'z')
		{
			_putchar(j++);
		}
		_putchar('\n');
		i++;
	}
}
