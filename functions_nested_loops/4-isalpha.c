#include <stdio.h>
#include "main.h"

/**
 * _isalpha-check if character is lowercase or uppercase
 * Return: 1-if lowercase/uppercase,0 otherwise
 */


int _isalpha(int letter)
{
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
