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

	for (alphabet = 'a'; alphabet <= 'z'; alphabet = alphabet * 10)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
