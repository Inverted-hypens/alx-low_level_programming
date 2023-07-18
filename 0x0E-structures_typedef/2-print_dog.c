#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @doginfo: struct dog to print
 */
void print_dog(struct dog *doginfo)
{
	if (doginfo == NULL)
		return;

	if (doginfo->name == NULL)
		doginfo->name = "(nil)";
	if (doginfo->owner == NULL)
		doginfo->owner = "(nil)";

	printf("Name: %s\n", doginfo->name);
	printf("Age: %f\n", doginfo->age);
	printf("Owner: %s\n", doginfo->owner);
}
