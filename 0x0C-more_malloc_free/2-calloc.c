#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - allocate memory for array
 *@nmemb:  number of elements in array
 *@size: size of each in byte
 *Return: no return
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *my_arr;
	int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	my_arr = malloc(nmemb * size);
	if (my_arr == NULL)
		return (NULL);
	for (i = 0; i < nmenb; i++)
	{
		my_arr[i] = 0;
	}
	return (my_arr);
}
