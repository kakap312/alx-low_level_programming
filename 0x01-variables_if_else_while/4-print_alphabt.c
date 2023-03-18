#include <stdio.h>

/**
 *  main - entry point
 *
 * Return: termination of program
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 113 || a == 101)
		{
			continue;
		} else
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
