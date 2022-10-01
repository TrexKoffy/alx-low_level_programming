#include <stdio.h>

/**
 * main - This returns the name of the program
 * @argc: Argument count
 * @argv: Argument Vector
 * Return: (0).
 */


int main(int argc, char __attribute__((unused)) *argv[])
{
	int init = 0;

	for (; init < argc; init++)
	{
		printf("%s\n", argv[init]);
	}
	return (0);
}
