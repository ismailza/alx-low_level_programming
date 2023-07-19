#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The start number
 *
 * Return: void.
 **/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");

			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");

			n--;
		}
	}
	else
	{
		printf("%i", n);
	}
	printf("\n");
}
