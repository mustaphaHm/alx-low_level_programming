#include "function_pointers.h"
/**
 * get_op_func - function that selected a corect function
 * @s: char parameter
 * Return: int
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

	while (ops[i].operation != NULL)
	{
		if (*ops[i].operation == *s)
			return (ops[i].function);
		i++;
	}
	return (NULL);
}
