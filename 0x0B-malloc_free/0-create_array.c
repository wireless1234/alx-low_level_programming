#include <stdio.h>
/**
 *create_array - function that creates an array of chars, and initializes it with a specific char
 *@size: variable
 *@c: variable
 *Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *newArr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		newArr = malloc(size * sizeof(char));
	}
	while (i < size)
	{
		newArr[i] = c;
	}
	return newArr;
}
