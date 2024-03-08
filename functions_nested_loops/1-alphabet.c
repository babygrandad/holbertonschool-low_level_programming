#include <stdio.h>

/**
 * printalphabet - prints the alphabet in lowercase followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}

int main(void)
{
print_alphabet();
return 0;
}
