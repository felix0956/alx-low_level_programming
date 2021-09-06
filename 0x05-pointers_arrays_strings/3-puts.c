#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * _puts - check the code
 *@str:func parameter
 * Return: Always void.
 */
void _puts(char *str)
{
write(1, str, strlen(str));
_putchar('\n');
}
