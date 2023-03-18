#include <stdio.h>
/**
 * main - entry point
 *
 * Return: exit point
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a < 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);

}
