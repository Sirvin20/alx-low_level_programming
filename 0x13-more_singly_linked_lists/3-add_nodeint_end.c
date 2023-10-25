#include "lists.h"

/**
 * add_nodeint_end - this add a new node in the end of the node
 * @head: my struct
 * @n: the int take in my linked list.
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (new_node);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (*head);
}
