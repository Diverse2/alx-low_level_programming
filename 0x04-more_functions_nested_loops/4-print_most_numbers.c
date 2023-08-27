#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * Do not print 2 and 4
 */

void print_most_numbers(void)
{
	char num;
	char escape_char = '2' && '4';

	for (num = '0'; num <= '9'; num++)
	{
		if (num == escape_char)
			continue;
	_putchar(num);
	}

	_putchar('\n');
}
