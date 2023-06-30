#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		if (s[length] >= 97 && s[length] <= 122) /*ASCII for a and z*/
		{
			s[length] = s[length] - 32;
			/*ASCII for A and Z is 65 and 122, i.e (97 - 32) and (122 - 32)*/
		}
		length++;
	}
	return (s);
}
