#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base value
 * @y: power value or exponent value
 *
 * Return: -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	int result = _pow_recursion(x, y);

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (result);
	}
}
