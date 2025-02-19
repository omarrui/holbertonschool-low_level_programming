#include <stdio.h>
int main(void)
{
	/*declare variables and initializeit with the first member of 
       the range [a - z] */
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
