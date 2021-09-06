#include <stdio.h>

/**
 * print_array - print element of integer array
 *@a:pointer
 *@n:size of array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(",");
printf(" ");
}
}
printf("\n");
}
