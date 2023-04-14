#include "main.h"
/**
 * _puts_recursion - prints a string recursively
 *
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
