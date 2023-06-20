#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: a pointer to struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
	if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d == NULL)
	{
		return;
	}
}

