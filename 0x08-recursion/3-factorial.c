#include "main.h"
/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: An integer value to calculate the factorial of.
 *
 * Return: The factorial of the given number as an integer value, or -1 if
 *         the given number is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
