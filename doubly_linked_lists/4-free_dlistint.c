#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - that frees a dlistint_t list
*
* @head: lsit to free
*
* Return: amways void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *check;

	while (head)
	{
		check = head->next;
		free(head);
		head = check;
	}
}
