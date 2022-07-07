#include "main.h"
#include <stdio.h>

/**
 *_isupper - checks if parameter  is an uppercase or not
 *@c: input character.
 *Return: 1 if is an uppercase character, 0 if a lowercase character.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
