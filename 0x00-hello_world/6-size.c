#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (success)
*
*/

int main(void)
{
char a;
int b;
long int d;
long long int e;
float c;

printf("Size of a char: %lu \n", sizeof(a));
printf("Size of a int: %lu \n", sizeof(b));
printf("Size of a long int: %lu \n", sizeof(d));
printf("Size of a long long int: %lu \n", sizeof(e));
printf("Size of a char: %lu \n", sizeof(c));

return (0);
}
