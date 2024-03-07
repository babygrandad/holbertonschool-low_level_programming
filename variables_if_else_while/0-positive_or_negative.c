#include <stdlib.h>
#include <stdio.h>

/**
* main - running conditional statements.
*
* Return: Always 0.
*/
int main(void)
{
	int n;
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

