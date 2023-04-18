#ifndef STRUCT_H
#define STRUCT_H
/**
 * struct dog - struct
 * @name: string parameter
 * @age: float age
 * @owner: string parameter
 * Return: struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
