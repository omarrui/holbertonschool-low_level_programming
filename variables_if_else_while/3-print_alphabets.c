#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	int x;

	i = 97;
	x=65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (x <= 90)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
