#include "main.h"
#include <string.h>

/**
 * puts_half - check the code
 * @str: func parameter
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i, l, length;
l = strlen(str);
length = l - 1;
for (i = 0; i <= length; i++)
{
if (i <= (length/2))
{
continue;
}
_putchar(str[i]);
}
_putchar('\n');
}
