#include "main.h"
#include <unistd.h>
/**
 * print_square - prints sqaures.
 * Return: returns the numbers.
 * @n: the number to be sqaured.
 */
void print_square(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('#');

			if (j == n)
			{
				_putchar('\n');
			}
		}
		_putchar('#');
	}
}
