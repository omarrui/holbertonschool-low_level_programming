#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_list - Prints all elements of a list_t list.
*
* @h: list to print.
*
* Return: The list printed.
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
