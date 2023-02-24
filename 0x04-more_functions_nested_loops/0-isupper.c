#include "main.h"

/**
 *  _isupper - uppercase letter
 *  @c: char to check
 *  Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		_putchar (1);
	else
		_putchar (0);
}
