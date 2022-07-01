

#include <stdio.h>

/**
 * main - printing out alphabets
 * Description: print alphabet in both lower and upper case
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

	a = 'A';
	while (a <= 'Z')
	{

		putchar(a);
		a++;

	}
	putchar('\n');
	return (0);
}
