#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the main entry of the program
 *
 * Return: always xero is success
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("%d and is greater than 5", lastDigit);
	} else if (lastDigit == 0)
	{
		printf("%d and is 0 ", lastDigit);
	} else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("%d and is less than 6 and not 0", lastDigit);
	}
	return (0);
}
