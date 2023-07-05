#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - function adds a new node at the end
 * of a list
 * @head: pointer to the first node
 * @str: constant string
 *
 * Return: address of the new element
 * NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
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
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	if (str == NULL)
	{
		new->str = NULL;
	}
	else
	{
		new->str = strdup(str);
		new->len = strlen(str);
	}
	return (new);
}
