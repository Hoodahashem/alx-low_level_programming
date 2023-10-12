#include "lists.h"
/**
 * print_dlistint - function
 * @h:head
 * Return: gustavo
**/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *curr = h;
	size_t i = 0;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		i++;
	}
	return (i);
}
