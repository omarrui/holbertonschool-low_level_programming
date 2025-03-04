#include "main.h"


/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes in the string accept.
 * @s: the string to search.
 * @accept: the set of bytes to look for.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
                                        break;
			}
		}
	}
	return (NULL);
}
