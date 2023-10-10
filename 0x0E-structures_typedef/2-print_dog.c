#include "dog.h"
#include <stdio.h>
/**
 * printd_dog - prints a struct dog
 * @d: input
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
	{
		printf("nil");
	}
	else if (d == NULL)
	{
		printf(" ");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
