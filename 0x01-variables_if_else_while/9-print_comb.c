#include <stdio.h>
/**
 * main - entry point
 *
 * Return: exit point
 */
int main(void)
{
	int a;
	int b = 44;
	int c = 32;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a == 57)
		{
			continue;
		} else
		{
			putchar(b);
			putchar(c);

		}

	}
	putchar('\n');
	return (0);
}
