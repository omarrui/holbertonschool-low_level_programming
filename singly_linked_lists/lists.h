#ifndef LISTS_H
#define LISTS_h
#include <stddef.h>
/**
 * struct lists_s -singly linked list
 * @str: string 
 * @len: length of the stirng
 * @next: points to the next node
 * 
 * Description: single linked list node structure 
 */
typedef struct lists_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
