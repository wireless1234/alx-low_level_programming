#include "main.h"

/**
 *reverse_array - a function that reverses the content of an array of integers
 *@a: input
 *@n: input
 *Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int i;
	int test[n];

	for (i = 0; i < n; i++)
	{
		test[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = test[i];
	}
}
