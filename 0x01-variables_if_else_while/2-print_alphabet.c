#include <stdio.h>

/**
*main - Entry point
*Description: print small alphabets
*Return: always 0
*/
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
putchar(x);
putchar('\n');
return (0);
}
