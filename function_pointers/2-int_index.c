#include "function_pointers.h"
#include <stddef.h>

/**
* int_index - searches for an integer
*
* @array: the array in process
* @size: the number of elements in the array
* @cmp:is a pointer to the function to be used to compare values
*
* Return: the int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
