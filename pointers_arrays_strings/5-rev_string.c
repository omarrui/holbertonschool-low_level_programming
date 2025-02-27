#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int length = 0, i;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	for (i = 0; i < length; i++, length--)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
	}
}
