#include "main.h"
#include <string.h>

/**
 * puts2 - check the code
 * @str:func parameter
 * Return: Always 0.
 */
void puts2(char *str)
{
int i, l, length;
l = strlen(str);
length = l - 1;
for (i = 0; i <= length; i++)
{
if ((i % 2) == 1)
{
continue;
}
_putchar(str[i]);
}
_putchar('\n');
}
