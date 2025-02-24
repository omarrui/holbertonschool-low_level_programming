#include "main.h"

/**
 * _isupper - find uppercase
 *
 * @c: Is a character to check
 *
 * Return: 1 if is upper 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
