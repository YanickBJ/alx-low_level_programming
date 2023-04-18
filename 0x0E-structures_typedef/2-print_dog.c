#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints a struct dog.
 *@d: input pointer of the struct dog.
 *
 *retun: (void)
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		       printf("Name: %s\n", d->name);
		else
			printf("name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
