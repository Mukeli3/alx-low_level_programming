#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning
 * of a listint_t list
 * @head: a pointer to a listint_t pointer
 * @n: a constant integer
 *
 * Return: address of the new element
 * NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
