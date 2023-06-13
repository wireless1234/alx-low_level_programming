#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenate two strings
 *@s1: string1
 *@s2: String2
 *Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	char *conStr;
	int i;

	if (s1 || s2 == NULL)
	{
		return (NULL);
	}
	conStr = (char *)malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);
	if (conStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (int)(strlen(s1) + strlen(s2)); i++)
	{
		if (i < (int)strlen(s1))
		{
			conStr[i] = s1[i];
		}
		else
		{
			conStr[i] = s2[i - (int)strlen(s1)];
		}
	}
	return (conStr);
}
