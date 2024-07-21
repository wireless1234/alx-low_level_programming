#include <stdio.h>

/**
 * print_array - Prints the current subarray being searched
 * @array: The array to be printed
 * @left: The left index of the subarray
 * @right: The right index of the subarray
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if the value
 * is not present or if the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{

	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			left = mid + 1;
		} else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
