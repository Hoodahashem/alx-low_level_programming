#include "lists.h"
/**
 * *free_dlistint - function
 *
 *@head: head
 * Return: gustavo
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *temp;

	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
		head = NULL;
	}
}
