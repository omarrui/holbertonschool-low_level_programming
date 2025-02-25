#include "main.h"

/**
 *4-print_most_numbers will  print numbers (1-9) except 2-4
 *
 *@n :numbers
 *
 *prints numbers except 2-4
*/
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
