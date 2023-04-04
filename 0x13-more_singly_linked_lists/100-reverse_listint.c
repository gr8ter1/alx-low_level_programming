#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked
 * @head: points to the listint_t address
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);
	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;
	return (*head);
}
