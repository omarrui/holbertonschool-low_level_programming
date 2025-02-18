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
	int last_digit;
	char *message; /* Pointer to store the message */

	/* Seed the random number generator and assign a random value to n */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Calculate the last digit of n */
	last_digit = n % 10;

	/* Determine the appropriate message */
	if (last_digit > 5)
		message = "and is greater than 5";
	else if (last_digit == 0)
		message = "and is 0";
	else
		message = "and is less than 6 and not 0";

	/* Print the result */
	printf("Last digit of %d is %d %s\n", n, last_digit, message);

	return (0);
}

