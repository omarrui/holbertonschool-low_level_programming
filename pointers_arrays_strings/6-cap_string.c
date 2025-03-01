#include <stdio.h>
#include <ctype.h>

/**
 *cap_string -Capitalizes all words of a string
 *@str: the input string to modify
 *
 *Return: char
*/

char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;
	char seperators[] = " \t\n,;:.!?\"(){}";
	int j;

	while (str[i] != '\0')
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		capitalize_next = 0;
		for (j = 0; seperators[j] !='\0'; j++)
		{
			if (str[i] == seperators[j])
			{
				capitalize_next = 1;
				break;
			}
		}
		i++;
	}
	return (str);
}
