#include "lists.h"
/**
 * listint_len - function that returns the number of
 *		elements in a linked listint_t
 * @h: points to the head of a listint_t list
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
