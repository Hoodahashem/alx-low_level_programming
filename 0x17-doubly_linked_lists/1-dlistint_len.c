#include "lists.h"
/**
 * dlistint_len - function
 * @h: head
 * Return: gustavo
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t i = 0;

	while (curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
