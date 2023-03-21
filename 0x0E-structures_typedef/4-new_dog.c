#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog1;

	new_dog1 = malloc(sizeof(dog_t));
	if (new_dog1 == NULL)
		return (NULL);
	new_dog1->age = age;
	if (name != NULL)
	{
		name = malloc(sizeof(name));
		if (name == NULL)
		{
			free(new_dog1);
			return (NULL);
		}
		new_dog1->name = name;
	}
	else
		new_dog1->name = NULL;
	if (owner != NULL)
	{
		owner = malloc(sizeof(owner));
		if (owner == NULL)
		{
			free(new_dog1);
			return (NULL);
		}
		new_dog1->owner = owner;
	}
	else
		new_dog->owner = NULL;
	return (new_dog1);
}
