#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: the string
 * Return: ALways 0 (Success)
 */
void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
