#include "stdio.h"
#include "stdlib.h"
#include "search_algos.h"
/**
 * linear_search - implement linear search
 * @array: array to search
 * @size: size of array
 * @value: item to search for
 * Return: index of value(Success) -1 (Failure)
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;


	if (array == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		printf("Value checked array[%ld] = %d\n", i, array[i]);
		if (array[i] == value)
		{
			break;
		}
		i++;
	}
	return (i);
}
