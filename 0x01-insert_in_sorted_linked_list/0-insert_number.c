#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * insert_node - Insert a node in a sorted list
 *
 * @head: Head of the linked list
 * @number: Value of the new node
 *
 * Return: Node created
 **/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node, *tmp;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = number;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}

	if ((*head)->n > number)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (tmp = *head; tmp->next && new_node->n > tmp->next->n; tmp = tmp->next)
		;

	new_node->next = tmp->next;
	if (tmp->next)
		tmp->next = new_node;

	return (new_node);
}
