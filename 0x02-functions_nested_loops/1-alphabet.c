#include "main.h"

/**
*main - Prints the alpgabet jn lower case followed by a line.
*
*Return: Always 0.
*/

print_alphabet(void)
{
	char small;

	for (small = 'a'; small <= 'z' ; small++)
	_putchar (small);
	_putchar ('\n');
	return (0);
}
