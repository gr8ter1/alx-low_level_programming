#include "main.h"
/**
 * _islower - check if char is lowercase
 * @c: is a char
 * Return: 1 if c is lowercase else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
