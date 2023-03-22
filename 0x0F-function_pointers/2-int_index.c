#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: size of array searched
 * @cmp: pointer used in comparing function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array && cmp)
	{
		for (c = 0; c < size; c++)
		{
			if (cmp(array[c]) != 0)
				return (c);
		}
	}
	return (-1);
}
