#include <stdio.h>

/**
 *main - Entry point of the program
 *
 *Description: Writing my 3rd C program, but I still love JavaScript, sad.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char  character;
int interger;
long int interger_32;
long long int interger_64;
float floating_point;
printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(character));
printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(interger));
printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(interger_32));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(interger_64));
printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(floating_point));
return (0);
}
