#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - couns the num of elements in a linked list (list_t)
 * 
 * @h: list to count
 * 
 * Return: number of elements to count
 */

 size_t list_len(const list_t *h)
 {
    unsigned int i = 0;    

    while (h)
    {
        i++;
        h = h->next;
    }
    return(i);
}
