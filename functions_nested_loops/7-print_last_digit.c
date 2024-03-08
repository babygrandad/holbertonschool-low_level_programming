#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the value we extract the last digit from
 * @i: is the last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
		i = -i;

	if (n < 0)
		n = -n;

	_putchar(i + '0');

	return (i);
}
