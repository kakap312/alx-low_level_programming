#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
	 * This is the preferred style for multi-line
	 * comments in C source code.
	 * Please use it consistently.
	 *
	 * Description:  A column of asterisks on the left side,
	 * with beginning and ending almost-blank lines.
	 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
