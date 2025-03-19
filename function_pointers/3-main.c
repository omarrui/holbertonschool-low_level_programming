#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Performs simple operations
*
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, error codes otherwise
*/
int main(int argc, char *argv[])
{
	int num2, num1, result;

	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("erroe⑊n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);

}
