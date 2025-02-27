#include "main.h"
/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, len = 0, start;

	while (str[len] != '\0')
	{
		len++;
	}
	start = (len + 1) / 2;

	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
