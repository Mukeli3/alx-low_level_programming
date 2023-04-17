#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 *@i: an integer
 *
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int n;

	scanf("%d", &i);
	n = i % 10;
	_putchar('n');
	_putchar('\n');
	return (n);
}
