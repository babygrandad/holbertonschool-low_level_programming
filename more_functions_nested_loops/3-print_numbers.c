#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers 0 to 9.
 * Return: returns the numbers.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
