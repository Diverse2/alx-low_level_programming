#include "main.h"

/**
* _isupper - checks if char is uppercase character
* @c: is the char to be checked
* Returns: 1 if c is uppercase, otherwise 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
