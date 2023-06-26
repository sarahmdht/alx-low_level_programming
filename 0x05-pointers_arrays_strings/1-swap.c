#include "main.h"

/**
 * swap_int - swap the value of two int
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
