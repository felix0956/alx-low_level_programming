#include "main.h"
#include <string.h>

/**
 *print_rev  - check the code
 *@s: func parameter
 */
void print_rev(char *s)
{
int i, l;
l = strlen(s);
for (i = l; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}


