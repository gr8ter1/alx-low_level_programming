#include "main.h"
#include <stdio.h>
/**
 * main - function that prints number of args
 * @argc: argument to count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
