#include "function_pointers.h"

/**
 * print_name - ccalls a function to print a name
 * 
 * @name: the name to print
 * @f: a function pointer the peints the name
 */
void print_name(char *name, void (*f)(char *))
{
    if (name && f)
        f(name);
}