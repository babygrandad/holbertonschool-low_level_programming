#include "main.h"
#include <unistd.h>
/**
 * print_numbers - prints numbers 0 to 9.
 * Return: returns the numbers.
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
