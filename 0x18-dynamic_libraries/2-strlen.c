#include "main.h"

/**
 *_strlen -length of a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
 */

int _strlen(char *s)
{
int j = 0;

while (s[j] != '\0')
{
j++;
}
return (j);
}
