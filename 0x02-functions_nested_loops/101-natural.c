#include <stdio.h>

/**
 * main - the main code block
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%i\n", sum);
	return (0);
}
