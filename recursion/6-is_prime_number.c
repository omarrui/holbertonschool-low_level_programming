#include "main.h"

/**
* help_prime_nb - Helps is_prime_number function.
*
* @n: Number to test.
* @x: Number to increment.
*
* Return: Int.
*/
int help_prime_nb(int n, int x)
{
	if (x == 1)
		return (1);
	if (x != n && n % x == 0)
		return (0);
	return (help_prime_nb(n, x - 1));
}
/**
* is_prime_number - Finds prime numbers.
*
* @n: Int to test.
*
* Return: If the int is a prime number.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (help_prime_nb(n, n));
}
