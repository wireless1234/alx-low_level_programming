#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@n: pointer
 *Return: char
 */

char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (n[i] >= 'a' && n[i] <= 'z')
			{
				n[i] -= 32;
				continue;
			}
		}
		if (n[i] == ' ' || '\t' || '\n' || ',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}')
		{
			i++;
			if (n[i] >= 'a' && n[i] <= 'z')
			{
				n[i] -= 32;
				continue;
			}
		}
		else
		{
			if (n[i] >= 'A' && n[i] <= 'Z')
				n[i] = n[i] + 32;
		}
	}
	return (n);
}
