#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *_strdup - create memory that contain string
 *@str: pointer
 *Return: character pointer
 */
char *_strdup(char *str)
{
	char *myStr;
	int length = strlen(str);
	int i = 0;

	if (*str == NULL)
	{
		return (NULL);
	}
	else
	{
		myStr = (char *)malloc(length * sizeof(char) + 1);
		if (myStr == NULL)
		{
			return (NULL);
		}
	}
	while (i <= length)
	{
		myStr[i] = str[i];
		i++;
	}
	return (myStr);
}
