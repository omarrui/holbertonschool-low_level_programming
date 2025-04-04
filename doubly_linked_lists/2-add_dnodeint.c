#include "lists.h"
#include <stdlib.h>

/**
 * add dnodeint - addds a node at the begining of the list
 * 
 * @head: address do the first list
 * @n: number to print
 * 
 * Return: hte addres of new elements 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;
    new->prev = NULL;
    new->next = (*head);

    if (*head != NULL)
        (*head)->prev = new;
    
    (*head) = new;

    return (new);
}
