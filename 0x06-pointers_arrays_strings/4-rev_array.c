#include "main.h"
/**
 * reverse_array - revereses an array of integers
 * @a: pointer to array.
 * @n: number of elements of an array.
 */
void reverse_array(int *a, int n)
{
	int temp, counter, j;

	j = n - 1;

	for (counter = 0; counter < n / 2; counter++)
	{
		temp = a[counter];
		a[counter] = a[j];
		a[j--] = temp;
	}
}
