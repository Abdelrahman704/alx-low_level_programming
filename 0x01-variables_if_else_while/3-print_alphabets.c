#include <stdio.h>
/**
 * main - Printing the all alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(alpha[x]);
	}
	char alpha2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int y;

	for (y = 0; y < 26; y++)
	{
		putchar(alpha2[y]);
	}
	putchar('\n');
	return (0);
}
