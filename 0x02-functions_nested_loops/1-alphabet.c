#include <stdio.h>

/**
 * main - Entry point.
 *
 * Returns: Always 0.
 */

void print_alphabet(void);

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return;

}
