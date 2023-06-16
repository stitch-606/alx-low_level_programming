#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1 (to indicate an error)
 */
int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int length = 59;
write(STDERR_FILENO, msg, length);
return (1);
}

