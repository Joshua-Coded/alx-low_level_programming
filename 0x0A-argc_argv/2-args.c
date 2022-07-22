#include <stdio.h>
/**
* @argc: the number on command line arguments.
* @argv: the array of the command line arguments.
* @Return: return 0 success.
*/
int main(int argc, char *argv[])
{
int v;
for(v = 1; v < argc; v++)
{
printf("%s\n", argv[v]);
return (0);
}
}
