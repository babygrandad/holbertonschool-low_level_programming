#include "main.h"
/**
 * print_square - prints sqaures.
 * Return: returns the numbers.
 * @n: the number to be sqaured.
 */
void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
