#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - Entry ppoint
 *Discription: 'print the last digit'
 *Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%d Last digit of", n, "and is greater than 5");
	else if (n == 0)
		printf("%d Last digit of", n, "and is 0");
	else
		printf("%d Last digit of", n, "and is less than 6 and not 0");
	return (0);
}
