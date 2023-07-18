#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @doginfo: pointer to struct dog to initialize
 * @name: name of dog to initialize
 * @age: age of the dog to initialize
 * @owner: dog owner name to initialize
 */

void init_dog(struct dog *doginfo, char *name, float age, char *owner)
{
	if (doginfo == NULL)
		doginfo = malloc(sizeof(struct dog));
	doginfo->name = name;
	doginfo->age = age;
	doginfo->owner = owner;
}
