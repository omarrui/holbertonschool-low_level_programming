#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program generates a random number, calculates its last
 * digit, and prints whether it is greater than 5, is 0, or is less than 6
 * and not 0.
 *
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
