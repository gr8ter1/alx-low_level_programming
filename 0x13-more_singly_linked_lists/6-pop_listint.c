#include "lists.h"

/**
 * pop_listint - deletes the head of a listint_t list node
 * @head: pointer to the listint_t
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (ret);
}
