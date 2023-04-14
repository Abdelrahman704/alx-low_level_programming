#include <stdio.h>
/**
 * know_prime - Checks if a number is prime recursively
 *
 * @n: Number to check
 * @pn: Possible factor for n
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int know_prime(int n, int pn)
{
	if (pn >= n && n > 1)
		return (1);
	else if (n <= 1 || n % pn == 0)
		return (0);
	else
		return (know_prime(n, pn + 1));
}
/**
 * is_prime_number - Determines if a number is prime or not
 *
 * @n: Number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (know_prime(n, 2));
}
