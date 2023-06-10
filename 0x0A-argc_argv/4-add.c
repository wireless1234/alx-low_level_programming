#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds numbers
 *@argc: argument
 *@argv: argument
 *Return: integer
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit((argv[i]) == 0))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
