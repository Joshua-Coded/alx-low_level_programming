#include <stdio.h>
/**
**main-prints the number of argument passed into it.
*@argc:number of cammand line arguments.
*@agrv:array that contains the program command line arguments
*Return: 0-success.
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);

}
