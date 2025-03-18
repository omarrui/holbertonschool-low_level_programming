#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints names
 * @f: void function
 * 
 * Return: void
 */
void print_name(char *name, void(*f)(char *))
{
   if (name == NULL)
        return;
    if (f != NULL)
        f(name);
    else
        return;
}