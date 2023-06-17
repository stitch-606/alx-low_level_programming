#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num <= 89; num++)
{
if (num / 10 < num % 10)
{
putchar(num / 10 + '0');
putchar(num % 10 + '0');

if (num != 89)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
)
