#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * src does not need to be null terminated.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * @n: number of bytes to be concatenated.
 *
 * Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, scount; /* length of dest and counter of src */

	length = 0;
	scount = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	while (src[scount] != '\0' && scount < n)
	{
		dest[length] = src[scount];
		length++;
		scount++;
	}

	dest[length] = '\0';

	return (dest);
}
