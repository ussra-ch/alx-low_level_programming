#include"dog.h"
#include<stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: point to the new stucture
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new__dog;

	int i;

	new__dog = malloc(sizeof(dog_t));

	if (new__dog == NULL)
	{
		return (NULL);
	}
	if (new__dog->name == NULL || new__dog->owner == NULL)
	{
		free(new__dog);
		return (NULL);
	}
	new__dog->name = malloc(sizeof(name) + 1);

	for (i = 0; name[i]; i++)
	{
		new__dog->name[i] = name[i];
	}
	new__dog->name[i] = '\0';
	new__dog->owner = malloc(sizeof(owner) + 1);

	for (i = 0; owner[i]; i++)
	{
		new__dog->owner[i] = owner[i];
	}
	new__dog->owner[i] = '\0';
	new__dog->age = age;

	return (new__dog);
}
