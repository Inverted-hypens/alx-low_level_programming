#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is the int value to be checked
 * Return: 1 if it is lowercase, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
