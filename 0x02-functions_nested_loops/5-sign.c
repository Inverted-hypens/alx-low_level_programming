#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and print + if greater than 0
 * 0 and print 0 if it is equal to 0
 * -1 and print - if less than 0
 */
int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		_putchar('+');
		check = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		check = 0;
	}
	else
	{
		_putchar('-');
		check = -1;
	}
	return (check);
}
