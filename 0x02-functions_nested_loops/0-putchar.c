#include "main.h"

/**
 * main - Entry points
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char AR[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		putchar(AR[ch]);
	_putchar('\n');
	return (0);
}
