#include "main.h"

/**
 * _strcat - check the code
 * @dest:func parameter
 * @src: func parameter
 * Return: Always 0.
 */
char _strcat(char *dest, char *src)

{
int i = 0, j;

while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
