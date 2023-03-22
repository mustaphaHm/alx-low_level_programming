#include "main.h"
/**
 * print_last_digit - function that return the last digit
 * @n: parameter int
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

       	lastDigit = n % 10;
	if (n < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
