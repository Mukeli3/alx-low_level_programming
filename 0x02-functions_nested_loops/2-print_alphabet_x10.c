#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	alphabet = 'a';

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
}
