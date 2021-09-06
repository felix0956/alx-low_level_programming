#include "main.h"
#include <string.h>
/**
 *print_rev  - check the code
 *@s: func parameter
 * Return: Always 0.
 */
void print_rev(char *s)
{
char tmp;
int l, length, i;
l = strlen(s);
length = l - 1;
for (i = 0; i < length; i++)
{
tmp = s[i];
s[i] = s[length];
s[length] = tmp;
length--;
}
}
