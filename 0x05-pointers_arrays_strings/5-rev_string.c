#include "main.h"
#include <string.h>
/**
 * rev_string - check the code
 * @s: function parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
char tmp;
int l,length,i;
l = strlen(s);
length = l - 1;
for(i = 0;i < length; i++)
{
       tmp = s[i];
       s[i] = s[length];
       s[length] = tmp;
       length--;
}
}
