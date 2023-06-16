#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int n;
if (n < 10)
{
putchar('0' + n);
}
else
{
putchar(87 + n);
}
putchar('\n');
return (0);
}
