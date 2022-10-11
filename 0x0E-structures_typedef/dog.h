#ifndef _dog_h_
#define _dog_h_

/**
  *dog_x - typedef for struct dog
  */
typedef struct dog dog_x;

/**
  *struct dog - struct that contains data about a random dog
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *
  *Description: The struct is called dog that contains information
  *such as the owner, age and name of the dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
