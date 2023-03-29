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

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
