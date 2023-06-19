#include <stdio.h>

/**
 * main - prints the alphabets in lowercase except e and q,
 * followed by a new line,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'e' && alp != 'q')
		{
		putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
