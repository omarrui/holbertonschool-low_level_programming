#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - takes two strings and concatenates them together
 * s1: st string
 * s2: 2nd string
 *
 * Return: 2 strings in one
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0;
	int j = 0;
	int sizeS1 = 0;
	int sizeS2 = 0;

	if (s1 == NULL)
		s1 = ""
	if (s2 ==NULL)
		s2 = ""
	while (s1[sizeS1])
		sizeS1++;
	while (s2[sizeS2])
		sizeS2++;
	concat = malloc((sizeS1 + sizeS2 +1) * sizeod(char));
	if (concat == NULL)
		return (NULL);
	while (i < sizeS1)
		concat[i] = s1[i];
		i++;
	while (j < sizeS2)
		concat[i] = s2[j]
		j++;
		i++;
	concat[i] = '\0';
	return(concat);

}

