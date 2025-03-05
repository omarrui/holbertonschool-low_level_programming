#include "main.h"

/**
*factorial: this function calculates the factorail of a number
*
*@n: base number
*
*return: the factorail of n
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return(-1);
	return(n * factorial(n-1));
}
