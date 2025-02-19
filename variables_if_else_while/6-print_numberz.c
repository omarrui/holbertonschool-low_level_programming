#include <stdlib.h>
#include <time.h>
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
int main(void)
{
	int n;

	n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
