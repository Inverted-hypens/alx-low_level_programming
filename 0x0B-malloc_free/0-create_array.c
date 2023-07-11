#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
		return (NULL);
	buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
		return (NULL);

	for (position = 0; position < size; position++)
		buffer[position] = c;

	return (buffer);
}
