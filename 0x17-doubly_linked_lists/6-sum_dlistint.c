#include "lists.h"

/**
 * sum_dlistint - function returns DLL all data (n) sum
 * @head: pointer to a list
 *
 * Return: sum of all the list data(n), 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total_s = 0;

	if (!head)
		return (total_s);

	while (head)
	{
		total_s += head->n;
		head = head->next;
	}
	return (total_s);
}
