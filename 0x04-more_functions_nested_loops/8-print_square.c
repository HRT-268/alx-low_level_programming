#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 *
 * Return: no return.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; < size; i++)
	{
		for (j = 0; j < size; J++)
		{
			_putchar(36);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
