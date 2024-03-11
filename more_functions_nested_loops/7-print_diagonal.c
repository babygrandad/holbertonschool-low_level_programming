#include "main.h"
#include <unistd.h>
/**
 * print_diagonal - prints a diagonal i guess.
 * @n: is the number of times the \ is typed i guess.
 * Return: returns the line.
 */
void print_diagonal(int n)
{

	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 1)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
