#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int o;
	int p;

	for (o = 0; o < 8; o++)
	{
		for (p = 0; p < 8; p++)
			_putchar(a[o][p]);
		_putchar('\n');
	}
}
