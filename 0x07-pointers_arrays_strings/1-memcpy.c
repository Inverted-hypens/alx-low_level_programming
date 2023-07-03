#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;

	for (; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
