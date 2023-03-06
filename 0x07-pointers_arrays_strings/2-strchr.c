#include "main.h"

/**
 * _strchr - entry point
 * @s: input char
 * @c: input char
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int u = 0;

	for (; s[u] >= '\0'; u++)
	{
		if (s[u] == c)
			return (&s[u]);
	}
	return (0);
}
