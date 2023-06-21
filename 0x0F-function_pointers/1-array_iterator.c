#include <stdio.h>
/**
 *array_iterator - iterate array
 *@array: array argument
 *@size: size of array
 *@action: function pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int length = (int)size;

	for (i = 0; i < length; i++)
	{
		action(array[i]);
	}
}
