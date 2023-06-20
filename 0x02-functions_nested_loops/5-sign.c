#include "main.h"

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(',');
_putchar(' ');
_putchar(n);
_putchar('\n');
return (1);
}
if else (n == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
_putchar(n);
_putchar('\n');
return (0);
}
else
{
_putchar('-');
_putchar(',');
_putchar(' ');
_putchar(-n);
_putchar('\n');
return (-1);
}
}
