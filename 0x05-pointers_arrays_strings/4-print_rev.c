#include "main.h"
#include <string.h>
/**
 *print_rev  - check the code
 *@s: func parameter
 * Return: Always 0.
 */
void print_rev(char *s)
{
  int i;
  for (i = 0; s[i] <= strlen(s); i--)
    _putchar(s);
    
}
