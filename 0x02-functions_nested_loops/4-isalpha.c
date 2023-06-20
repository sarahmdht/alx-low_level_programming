#include "main.h"
/**
 * _isalpha - Write a function that checks for lower or upper case character.
 * @c: alphabet character
 * Return: Nothing.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
