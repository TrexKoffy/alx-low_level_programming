#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*Description: code will print whether n is negative or positive
*Return: always 0
*/
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
printf("Last Digit of %d is: %d", n, digit);
if (digit > 5)
printf("%d and is greater than 5\n", digit);
else if (digit < 6)
printf("%d and is less than 6 and not 0\n", digit);
else
printf("and is 0\n");
return (0);
}
