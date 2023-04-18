#include <stdlib.h>
#include "dog.h"
/**
  *new_dog - creates a new dog
  *@name: 1st member.
  *@age: 2nd member.
  *@owner: 3rd member.
  *
  *Return: NULL if fail.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
