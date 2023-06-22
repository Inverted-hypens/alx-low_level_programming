#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is the int value to be checked
 * Return: 1 if true, otherwise return 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
