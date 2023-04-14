#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 *
 * @n : the number we need to get the square of it
 * @rk : the square root
 *
 * Return:the square root
 */
int get_square(int n, int rk);
int _sqrt_recursion(int n)
{
	return (get_square(n, 1));
}
/**
 * get_square - finding square root
 * @n : int to find square root
 * @rk: the req square root
 * Return: rk
 */
int get_square(int n, int rk)
{
	if (rk * rk == n)
		return (rk);
	else if (rk * rk < n)
		return  (get_square(n, rk + 1));
	else
		return (-1);
}
