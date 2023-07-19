#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_alphabet(void)
{
	int i = 97;

	while (i <= 'z')
	{
		_putchar(i++);
	}

	_putchar('\n');
}
