#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * _puts - check the code
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
write(1, str, strlen(str));
_putchar('\n');
}
