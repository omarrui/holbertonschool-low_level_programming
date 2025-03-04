#include "main.h"
#include <stddef.h>

/**
 *_strchr will only print the characters in s from c to the rest
 *@s string to search
 *@c the letter to allocate
 *
 *return string that starts from the char c
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0;s[i] != '\0'; i++)
	{
		if (s[i] == c )
		return (&s[i]);
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
