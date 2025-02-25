#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14.
 *
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}

			_putchar((n % 10) + '0');
		}

		_putchar('\n');
	}
}
