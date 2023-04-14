#include "main.h"
/**
 * inception - makes magic a reality
 * @s1: the first string
 * @s2: the second string, can contain wildcard
 *
 * Return: 1 if identical, 0 if false
 */
int inception(char *s1, char *s2)
{
	int k = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		k += wildcmp(s1 + 1, s2 + 1);
	k += inception(s1 + 1, s2);
	return (k);
}
/**
 * move_star - iterates past asterisk
 * @s2: the second string, can contain wildcard
 *
 * Return: the pointer past star
 */
char *move_star(char *s2)
{
	if (*s2 == '*')
		return (move_star(s2 + 1));
	else
		return (s2);
}
/**
 * wildcmp - compares two strings lexicographically
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if identical, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	int w = 0;

	if (!*s1 && *s2 == '*' && !*move_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			w += wildcmp(s1 + 1, s2 + 1);
		w += inception(s1, s2);
		return (!!w);
	}
	return (0);
}
