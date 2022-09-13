#include "main.h"

/**
* print_alphabet_x10 - Prints 10 times the alphabet in lower case
*/

void print_alphabet_x10(void)
{
	int num = 0;
	char small;

	while (num++ <= 9)
	{
	for (small = 'a'; small <= 'z'; small++)
	_putchar (small);
	_putchar ('\n');
	}
}
