#include "main.h"

/**
 *puts _half - prints the secong half of a str
 *@str : thebinput string
 *
 *Return: void
 */
void puts_half(char *str)
{
	int i, len = 0, start;

	while (str[len] !='\0')
		len++;

	start = (len + 1) /2;

	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
