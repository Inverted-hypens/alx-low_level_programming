#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 *
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int dl, sl; /* dl and sl, length of dest and src respectively */

	dl = 0;
	sl = 0;

	while (dest[dl] != '\0')
		dl++;

	while (src[sl] != '\0')
	{
		dest[dl] = src[sl];
		sl++;
		dl++;
	}

	dest[dl] = '\0';

	return (dest);
}
