#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	char num;
	int i;

	i = 0;
	
	while (i < 10)
	{
		num = '0';
		while (num <= 14)
		{
			_putchar(num);
			num++;
		}
		_putchar('\n');
		i++;
	}
}

