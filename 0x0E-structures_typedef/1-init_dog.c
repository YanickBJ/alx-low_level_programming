#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: input pointer of type struct dog.
 * @name: input the name of struct dog.
 * @owner: input the owner of struct dog.
 * @age: input the age of the struct dog.
 * return: (void)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

