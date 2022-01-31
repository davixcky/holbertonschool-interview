#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle
 *
 * @list: Head of the single linked list
 *
 * Return: Return 0 if there is no cycle, otherwise 1
 **/
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	slow = fast = list;
	if (!list || !(list->next))
		return (0);

	fast = fast->next->next;
	while (fast)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
