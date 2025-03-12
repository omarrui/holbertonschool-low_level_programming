#include <stdlib.h>

/**
 * create_array - Creates an array of charts and initializes it with a specidic cahr
 * @size : the size of the array
 * @c: the ch to initialize the array with 
 *
 * Return: a pointer to the array, or null if the size is 0 or memo allocation fails
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == null)
		return(NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
