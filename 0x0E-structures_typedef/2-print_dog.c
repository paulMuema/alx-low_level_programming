#include <stdio.h>
#include "dog.h"

/**
  *print_dog - prints information about a dog.
  *
  *@d : information of the dog
  *name, age and owner
  *
  *Return: no return
  */
void print_dog(struct dog *d)
{
	if (d)
	{
	if (!(d->name))
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (!(d->owner))
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	}

}
