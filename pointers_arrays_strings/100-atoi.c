#include "main.h"
#include <limits.h>

/**
* _atoi - Convert string to an integer
*
* @s: String to convert
*
* Return: String convert to int.
*/
int _atoi(char *s)
{
	int i = 0;

	int negatif = 0;

	int num = 0;

	while (s[i])
	{
		if (s[i] == '-')
			negatif++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			if (num == 214748364 && s[i + 1] > '7' && s[i + 1] <= '9')
			{
				num = INT_MIN;
				return (num);
			}
		}
		i++;
	}
	if (negatif % 2 > 0)
		num = num * -1;
	return (num);
}
