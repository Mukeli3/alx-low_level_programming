#include <stdio.h>

void beforeMain (void) __attribute__ ((constructor));
/**
 * beforeMain - function prints a string before
 * main function is executed
 *
 * Return: void
 */
void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
