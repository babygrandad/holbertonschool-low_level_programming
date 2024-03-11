#include "main.h"
#include <unistd.h>

/**
 * print_numbers - prints numbers 0 to 9.
 * Return: returns the numbers.
 */
void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
