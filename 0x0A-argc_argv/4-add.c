#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int count, sum, c;

	for (count = 1; count < argc; count++)
	{
		for (c = 0; argv[count][c] != '\0'; c++)
		{
			if (!isdigit(argv[count][c]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[count]);
	}
	printf("%d\n", sum);

	return (0);
}
