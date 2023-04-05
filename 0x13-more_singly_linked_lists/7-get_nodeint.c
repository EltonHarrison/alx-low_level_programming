#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint _t linked file
 * @head: pointer to the head of the list
 * @index: index of the nod, starting from 0
 *
 * Return: pointer to the nth node or NULL if it doesnt exit
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index ; i++)
		head = head->next;

	return (i == index ? head : NULL);

}
