#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - convert binary to unsigned
 * @b: argument
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		exit(1);

	size_t length = strlen(b);
	unsigned int result = 0;
	unsigned int base = 1;

	for (int i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		exit(1);

		int digit = b[i] - '0';
		result += digit * base;
		base *= 2;
	}

	return (result);
}
