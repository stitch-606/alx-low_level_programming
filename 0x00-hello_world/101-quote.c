#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 (to indicate an error)
 */
int main(void)
{
char *message = "and that piece of art is useful\"- Dora Korpar,"
"2015-10-19\n";
int length = 59;
write(STDERR_FILENO, message, length);
return (1);
}
