#include "main.h"
/**
 *strlen_recursion: will count how many ch are in the string
 *
 *@s: is the string we gonna be counting
 *
 *return: int
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
