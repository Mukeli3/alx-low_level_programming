#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - function that prints all the elements
 * of a list_t list
 * @h: a constant pointer to list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *temp;
	temp = h;

	if (h == NULL)
	{
		return (0);
	}
	while (temp->next != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		count++;
	}
	if (temp->next == NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		count++;
	}
	return (count);
}

int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
