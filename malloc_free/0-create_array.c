#include "main.h"
#include <stdlib.h>

/**
 * create_array:create array of Size and assign c
 * @size: size of array
 * Description: Create array of size size and assign c
 * Return: Pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
	{
	char *str;
	unasigned int i;

	str = malloc(size(char) * size);
	if (size == 0 || str == NULL)
		retuen (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
	}
