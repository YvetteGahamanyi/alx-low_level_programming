#include "main.h"
/**
 * _isalpha - if c is a letter, lowercase or uppercase
 * @c: parameter
 * Return: 1 for success
 */
int _isalpha(int c)
{
  if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
    return (1);
  else
    return (0);
}
