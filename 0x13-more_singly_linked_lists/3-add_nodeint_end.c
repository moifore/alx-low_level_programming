#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 *
 * @head: A pointer to the address of the head of linked list
 * @n: Integer for the new node
 * Return: An integer at the address of the last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
