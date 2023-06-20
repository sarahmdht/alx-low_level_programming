#include "main.h"
/**
 * int print_last_digit - to brint last digit
 * @n: integer
 * Return: n
 */
int print_last_digit(int n)
{
n %= 10;
if (n < 0)
{
n *= -1;
}
_putchar('0' + n);
return (n);
}
