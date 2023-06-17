#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
{
printf("%i is greater than 5\n", n);
}
else if (n == 5)
{
printf("%i is equal to 5\n", n);
}
else if (n < 5)
{
printf("%i is less than 5 and not equal to 0\n", n);
}

return (0);
}
