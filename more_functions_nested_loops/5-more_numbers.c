#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers 0 to 9.
 * Return: returns the numbers.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		_putchar('%d', i);
	}
	_putchar('\n');
}
