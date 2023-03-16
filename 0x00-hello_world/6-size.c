#include <stdio.h>

/**
 * main - this is the main entry of the program
 *
 * Return: always xero is success
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float m;
printf("Size of a char: %2d byte(s)\n", sizeof(a));
printf("Size of an int: %2d byte(s)\n", sizeof(b));
printf("Size of a long int: %2d byte(s)\n", sizeof(c));
printf("Size of a long long int: %2d byte(s)\n", sizeof(d));
printf("Size of a float: %2d byte(s)", sizeof(m));
return (0);
}
