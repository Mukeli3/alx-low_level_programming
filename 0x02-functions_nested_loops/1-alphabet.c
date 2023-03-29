#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char alphabet;

	if (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
}
