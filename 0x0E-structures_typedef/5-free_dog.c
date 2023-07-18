#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @doginfo: struct dog
 */

void free_dog(dog_t *doginfo)
{
	if (doginfo)
	{
		free(doginfo->name);
		free(doginfo->owner);
		free(doginfo);
	}
}
