#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Description:
 * This function writes a single character to the standard output.
 *
 * Return:
 * On success, returns the number of characters written (always 1).
 * On error, returns -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
