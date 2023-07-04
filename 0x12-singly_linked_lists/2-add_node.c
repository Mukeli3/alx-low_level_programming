#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - function that adds a node at the beginning
 * of a list
 * @head: a pointer to a list_t pointer
 * @str: a constant string
 *
 * Return: address of the new element, NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		newNode->str = NULL;
	}
	else
	{
		newNode->str = strdup(str);
		newNode->len = strlen(str);
	}
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
