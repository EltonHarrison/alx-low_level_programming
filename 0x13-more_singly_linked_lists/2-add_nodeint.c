#include "lists.h"

/**
 * add_nodeint - adds new node at the begining of a listint_t list.
 * @head:  double pointer to the head of the linked list
 * @n: integer value to add to the new node
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
