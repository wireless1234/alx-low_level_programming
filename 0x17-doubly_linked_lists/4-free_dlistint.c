#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
