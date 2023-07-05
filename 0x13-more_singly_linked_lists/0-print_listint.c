#include "lists.h"
/**
 * print_listint - print elements of list
 *
 * @h: pointer to list head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = h->next;
		count++;
	}
	return (count);
}
