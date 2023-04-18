#include "dog.h"
#include "stdio.h"
/**
 * print_dog - function that prints a struct dog
 * @d: struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil");
	else if (d->name == NULL)
		printf("Name: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
