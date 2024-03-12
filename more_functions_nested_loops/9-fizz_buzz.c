#include "main.h"
#include <stdio.h>

/**
 * main - prints fizz buzz game;
 * Return: Retuens fizz buzz 1 - 100
 */

int main(void)
{
	int i;

	for(i = 1; <= 100; i++)
	{
		if ((i % 3 == 0 ) && (i % 5 == 0 ))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0 )
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0 )
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf(i);
			printf(" ");
		}
	}
}
