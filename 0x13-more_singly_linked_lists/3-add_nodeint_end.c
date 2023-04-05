#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: A pointer to a pointer to the head node of the list
 * @n: The integer value to store in the new node
 *
 * Return: The address of the new node
 *         or returns NULL if the memory allocation fails or head is NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first_node, *last_node;

	if (!head)
		return (NULL);

	first_node = malloc(sizeof(listint_t));
	if (!first_node)
		return (NULL);

	first_node->n = n;
	first_node->next = NULL;

	if (!*head)
	{
		*head = first_node;
		return (first_node);
	}

	last_node = *head;
	while (last_node->next)
		last_node = last_node->next;

	last_node->next = first_node;

	return (first_node);


}
