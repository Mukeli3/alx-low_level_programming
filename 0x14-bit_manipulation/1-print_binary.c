#include "main.h"

/**
 * print_binary - function prints the binary representation of a number
 * @n: number to be converted to binary
 *
 * @Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1 && n != 0)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
