#include "main.h"

/**
 * _memset - block of memory with specific value
 * @s: address of memory
 * @b: desired value
 * @n: bytes to be changed
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int l = 0;

	for (; n > 0; l++)
	{
		s[l] = b;
		n--;
	}
	return (s);
}
