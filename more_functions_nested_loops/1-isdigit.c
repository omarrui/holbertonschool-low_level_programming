#include "main.h"
/**
 * _isdigit - find digits
 *
 * @c: Is a digit  to checker
 *
 * Return: 1 if its digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
