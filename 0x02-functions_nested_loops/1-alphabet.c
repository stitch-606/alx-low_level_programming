#include "main.h"
/**
 * main - check the code
 *
 * print_alphabet - Prints the alphabet in lowercase followed by a new line 
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char lett;
for (lett = 'a'; lett <= 'z'; lett++)
{
_putchar(lett);
}
_putchar('\n');
}
