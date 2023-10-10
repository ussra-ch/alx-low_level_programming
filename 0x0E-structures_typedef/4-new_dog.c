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

	new__dog = malloc(sizeof(dog_t));

	new__dog->name = malloc(sizeof(name) + 1);
	
	new__dog->name = name;
	new__dog->owner = malloc(sizeof(owner) + 1);
	new__dog->owner = owner;
	new__dog->age = age;
	if (new__dog == NULL)
	{
		return (NULL);
	}
	return (new__dog);
}
