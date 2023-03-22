#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: parameter
 * Return: 1 and + , 0 and 0 , -1 and -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
