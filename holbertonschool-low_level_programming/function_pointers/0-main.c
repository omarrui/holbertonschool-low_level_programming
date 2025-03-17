#include <stdio.h>
#include "function_pointers.h"

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

void print_name_uppercase(char *name)
{
    unsigned int i = 0;
    printf("Hello, my uppercase name is ");
    while (name[i])
    {
        putchar(name[i] >= 'a' && name[i] <= 'z' ? name[i] - 32 : name[i]);
        i++;
    }
    putchar('\n');
}

int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    return (0);
}

