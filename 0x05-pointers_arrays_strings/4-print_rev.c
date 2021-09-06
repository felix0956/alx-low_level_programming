#include "main.h"

int _strlen(char *str);
/**
 *print_rev  - check the code
 *@s: func parameter
 */
void print_rev(char *s)
{
int length = _strlen(s);

for (; length >= 0; lenth--)
{
if (*(s + length) == '\0')
length -= 1;
if (*(s + length == '\0' && *(s + (length + 1)) == '\0')
break;
_putchar(*(s + length));
}
_putchar(10);
}

/**
 * _strlen - writes the character c to stdout
 * @str: The character to print
 * Return: alway return length counted
 */
int _strlen(char *str)
{
int count = 0;
while (*str != '\0')
{
count++;
str++;
}
return (count);
}
