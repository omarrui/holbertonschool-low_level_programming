#include "main.h"

/**
 * strlen - would tell us the length of a string
 * @: Pointer to second integer
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
