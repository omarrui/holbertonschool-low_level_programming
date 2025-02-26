#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x = 1;
	int j;

	while (x <= size)
	{
		j = 0;
		while (j < size)
		{
			if (j < size - x)
				_putchar(' ');
			else
				_putchar('#');
			j++;
		}
		x++;
		_putchar('\n');
	}
	if (size == 0 || size < 0)
		_putchar('\n');
}
