#include <stdio.h>
#include "main.h"

/**
 *print_alphabet -  prints lower case alphabet
 *
 */

void print_alphabet(void)
{
	int index;

	for (index = 97; index <= 122; index++)
	{
		_putchar(index);

	}
	_putchar('\n');
}
