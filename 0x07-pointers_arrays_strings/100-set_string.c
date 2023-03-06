#include "main.h"

/**
 * set_string - sets the value of a pointer to another pointer
 * @s: pointer to be pointed to
 * @to: pointer char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
