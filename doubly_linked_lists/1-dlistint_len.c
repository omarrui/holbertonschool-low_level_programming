#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - count the number of elements we got in the list
 * 
 * @h: the lsit we r using
 * 
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
    unsigned int nbE = 0;

    while (h)
    {
        nbE++;
        h = h->next;
    }
    return (nbE);
}
