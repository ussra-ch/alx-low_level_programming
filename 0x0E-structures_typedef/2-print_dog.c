#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: input
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL || (*d).owner == NULL)
	{
		printf("Name: (nil)");
		printf("Age: 0.000000");
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
