#include "main.h"
/*
 * rint_alphabet - print alphabet in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
  int n;

  for (n = 'a'; n <= 'z'; n++)
    {
      _putchar(n);
    }
  _putchar('\n');
}