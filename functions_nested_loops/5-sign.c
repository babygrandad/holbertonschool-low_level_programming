#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	_putchar('\n');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	_putchar('\n');
	return (-1);
	}
	else
	{
	_putchar('0');
	_putchar('\n');
	return (0);
	}
}
