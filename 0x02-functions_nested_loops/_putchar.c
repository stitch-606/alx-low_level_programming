#include <unistd>
#include <main.h>
/**
 *_putchar - write the character c to stdout
 *@c: the character to print
 *
 *return = 1 in success and -1 if error
 *
 */
int _putchar(char c)
 return (write(1, &c, 1));
