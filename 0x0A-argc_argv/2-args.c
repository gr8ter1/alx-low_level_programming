#include "main.h"
#include <stdio.h>
/**
 * main - function that prints all the args content
 * @argc: content to count
 * @argv: content vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}

	return (0);
}
