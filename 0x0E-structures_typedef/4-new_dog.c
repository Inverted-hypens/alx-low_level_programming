#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: pointer to a new dog
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenX, lenY;
	dog_t *doginfo;

	doginfo = (dog_t *)malloc(sizeof(dog_t));
	if (doginfo == NULL)
		return (NULL);
	lenX = lenY = 0;
	while (name[lenX++])
		;
	while (owner[lenY++])
		;

	doginfo->name = malloc(lenX * sizeof(doginfo->name));
	if (doginfo->name == NULL)
	{
		free(doginfo);
		return (NULL);
	}
	for (i = 0; i <= lenX; i++)
		doginfo->name[i] = name[i];
	doginfo->age = age;
	doginfo->owner = malloc(lenY * sizeof(doginfo->owner));
	if (doginfo->owner == NULL)
	{
		free(doginfo->name);
		free(doginfo);
		return (NULL);
	}
	for (i = 0; i <= lenY; i++)
		doginfo->owner[i] = owner[i];
	return (doginfo);
}
