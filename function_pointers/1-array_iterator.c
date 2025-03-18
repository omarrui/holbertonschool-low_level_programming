#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array in process
 * @size: the number of elements in the array
 * @action: pointers to the function to be applied to each element
 * 
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if(array == NULL || action == NULL)
        return;
    for (i = 0; i < size; i++)
        action(array[i]);
}