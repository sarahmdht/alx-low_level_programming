#include "main.h"
/**
 * islower - Write a function that checks for lowercase character.
 * @c: alphabet character
 * Return: Nothing.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
