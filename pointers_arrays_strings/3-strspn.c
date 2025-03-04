#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The main string
 * @accept: The substring to compare against
 *
 * Return: The number of bytes in s that match accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0;
	
	int found;
	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if(!found)
			break;
	}
	return(i);
}
