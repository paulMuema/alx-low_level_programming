#include "dog.h"
#include <stdlib.h>

/**
  *new_dog - creates a new dog.
  *@name: name of the dog
  *@age: age of the dog.
  *@owner: owner of the dog.
  *
  *Return: information of the dog.
  *Othrwise: returns Null
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_a;
	int a, lname, lowner;

	dog_a = malloc(sizeof(*dog_a));
	if (dog_a == NULL || !(owner) || !(owner))
	{
		free(dog_a);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	dog_a->name = malloc(lname + 1);
	dog_a->owner = malloc(lowner + 1);

	if (!(dog_a->name) || !(dog_a->owner))
	{
		free(dog_a->owner);
		free(dog_a->name);
		free(dog_a);
		return (NULL);
	}

	for (a = 0; a < lname; a++)
		dog_a->name[a] = name[a];
	dog_a->name[a] = '\0';

	dog_a->age = age;

	for (a = 0; a < lowner; a++)
		dog_a->owner[a] = owner[a];
	dog_a->owner[a] = '\0';

	return (dog_a);
}
