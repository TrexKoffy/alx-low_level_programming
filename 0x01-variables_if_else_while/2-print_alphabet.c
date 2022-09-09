#include <stdio.h>

/**
*main - Entry point
*Description: print small alphabets
*Return: always 0
*/
int main(void)
{
char i;
putchar("Lower case characters:\n");
for(i='a'; i<='z'; i++)
putchar("%c ",i);
return 0;
}

