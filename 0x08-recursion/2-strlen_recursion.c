#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string using recursion.
 *
 * @s: Pointer to the string to calculate the length of.
 *
 * This function takes a pointer to a string @s and calculates the length of
 * the string by recursively counting the number of characters until the null
 * character ('\0') is reached.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
