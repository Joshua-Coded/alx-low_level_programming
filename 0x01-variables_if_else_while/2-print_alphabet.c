#include <stdio.h>

/**
 * main - printing alphabet followed by a new line
 * Description: alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
