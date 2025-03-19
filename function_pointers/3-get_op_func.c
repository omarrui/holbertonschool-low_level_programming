#include "3-calc.h"
#include <stddef.h>

/**
* get_op_func - selects the correct operating function
*
* @s: the operator passed as an arg
*
* Return: a pointer to the function corresponding to the operator
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
    return (NULL);
}
