#ifndef DOG_H
#define DOG_H
/**
 * struct dog - short structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: awner of the dog
 *
 * Description: structure containing some information about the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
