#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function to perform
 * @s: operator passed as argument to the program
 * Return: pointer to the function that corresponds to the operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int y;

	y = 0;

	while (ops[y].op)
	{
		if (strcmp(ops[y].op, s) == 0)
			return (ops[y].f);
		y++;
	}
	return (NULL);
}
