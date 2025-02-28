#include "main.h"

/**
 * strcpy: copies the string into ptr
 *
 *@src gonna be coppied
 *@dest is where we gonna transfer our code
 *
 *Return char
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
