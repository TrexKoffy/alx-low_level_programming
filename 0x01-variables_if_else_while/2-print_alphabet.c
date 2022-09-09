#include <stdio.h>

/**
*main - Entry point
*Description: print small alphabets
*Return: always 0
*/
int main(void)
{
char i;
for (i='a'; i<='z'; i++)
putchar("%c", i);
return 0;
}

