#include "main.h"i
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 *
 * @x: The base value to raise to a power.
 * @y: The exponent value to raise the base value to.
 *
 * Return: The value of @x raised to the power of @y as an integer value, or -1
 *         if the exponent value is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1)
	else
		return (x * _pow_recursion(x, y - 1));
}
