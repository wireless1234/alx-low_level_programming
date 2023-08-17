#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t length = 0;

	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	return (length);
}
