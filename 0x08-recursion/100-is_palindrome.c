#include "main.h"
/**
 * last_index - Returns the last index of a string (counts the null char)
 *
 * @s: Pointer to the string
 *
 * Return: Integer value of the last index of the string
 */
int last_index(char *s);
/**
 * check - Checks if a string is a palindrome
 *
 * @s: String to check
 * @start: Integer value that moves from right to left
 * @end: Integer value that moves from left to right
 * @mod: Integer value
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check(char *s, int start, int end, int mod);
/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * @s: String to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * last_index - Returns the last index of a string (counts the null char)
 *
 * @s: Pointer to the string
 *
 * Return: Integer value of the last index of the string
 */
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
/**
 * check - Checks if a string is a palindrome
 *
 * @s: String to check
 * @start: Integer value that moves from right to left
 * @end: Integer value that moves from left to right
 * @mod: Integer value
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
