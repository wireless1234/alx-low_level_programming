#include <stdio.h>
/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: string
 *Return: int
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	is_palindrome(s + 1);

}
