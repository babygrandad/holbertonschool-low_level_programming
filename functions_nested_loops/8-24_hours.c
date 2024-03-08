#include <stdio.h>
/**
 * print_two_digits - Prints a number as two digits
 * @num: The number to print
 * jack_bauer - Prints every minute of the day
 */

void print_two_digits(int num)
{
	putchar('0' + num / 10);
	putchar('0' + num % 10);
}

void jack_bauer(void)
{
	for (int hour = 0; hour < 24; hour++)
	{
		print_two_digits(hour);
		putchar(':');
		for (int minute = 0; minute < 60; minute++)
		{
		print_two_digits(minute);
		putchar('\n');
		}
	}
}
