#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the
 * end of a  list
 * @head: a pointer to a listint_t pointer
 * @n: a constant integer
 *
 * Return: address of the new element,
 * NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head == NULL)
	{
		return(NULL);
	}
	new = malloc(sizeof(listint_t));
	if(new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	new->n = n;
	return (new);
}
