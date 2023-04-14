#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse order using recursion.
 *
 * @s: A pointer to the string to be printed.
 *
 * This function prints the characters of a string in reverse order to the
 * standard output, one character at a time, using recursion.
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
	return;
	}
	else
	{
	_print_rev_recursion(&s[0] + 1);
	_putchar(*s);
	}
}
