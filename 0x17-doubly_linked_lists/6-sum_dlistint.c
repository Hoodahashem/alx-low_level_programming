#include "lists.h"
/**
 * sum_dlistint - function
 *
 *@head: head
 *
 * Return: gustavo
 */

int sum_dlistint(dlistint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
