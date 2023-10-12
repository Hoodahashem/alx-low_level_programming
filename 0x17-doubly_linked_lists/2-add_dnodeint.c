#include "lists.h"
/**
 * add_dnodeint - function
 * @head: head
 * @n: number
 * Return: gustavo
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL, *t = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;

	if (!head || !(*head))
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		t = *head;
		t->prev = newnode;
		*head = newnode;
		newnode->next = t;
		return (newnode);
	}
	return (NULL);
}
