#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
  int n;
  char lett;

  for (n = 0; n < 10; n++ )
    {
      for (lett = 'a'; lett <= 'z'; lett++)
	{
	  _putchar(lett);
	}
      _putchar('\n');
    }
}
