#include "lists.h"
/**
* dlistint_len - counts and returns the number of elements of a list
* @h: pointer to the head of the node
* Return: number of nodes in the list
**/
size_t dlistint_len(const dlistint_ *h)
{
	size_t size;
	
	size = 0;
	if (h == NULL)
		return (size);
	
	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
