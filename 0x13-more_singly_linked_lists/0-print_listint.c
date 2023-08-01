#include "lists.h"

/**
 * listint_len - print len.
 * @h: list.
 * Return: The linked.
 */

size_t print_listint(const listint_t *h)
{
    size_t num = 0;

    while (h)
    {
        printf("%d\n", h->n);
        num++;
        h = h->next;
    }

    return (num);
}
