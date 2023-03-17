#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory to allocate
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
