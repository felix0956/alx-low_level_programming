/**
 * swap_int - check the code
 * @a:func parameter
 * @b:func parameter
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c = 0;
c = *b;
*b = 0;
*b = *a;
*a = c;
}

