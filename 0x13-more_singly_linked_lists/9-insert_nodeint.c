#include "lists.h"

/**
 *insert_nodeint_at_index - Updates a new node at a given position
 *@head: Pointer to a pointer to the  head node of the linked list
 *@idx: Index of the position where the new node
 *@n: Value to be stored in new nodes
 *
 *Return: Pointer to newly created node, or NULL if operation failed
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tempo_node;
	unsigned int i = 0;

	if (head == NULL || idx > listint_len(*head))
		return (NULL);
	new_node =  malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tempo_node = *head;
	while (i < idx - 1)
	{
		tempo_node = tempo_node->next;
		i++;
	}

	new_node->next = tempo_node->next;
	tempo_node->next = new_node;

	return (new_node);
}

