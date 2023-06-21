#include <stdio.h>
/**
 *print_name - a fuction
 *@name: string
 *@f: pointer
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
