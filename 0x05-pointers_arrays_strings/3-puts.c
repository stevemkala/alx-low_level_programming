#include "main.h"
/**
 * _puts - prints a string followef by a new line
 * @str: 
 * Return: Always 0(Success)
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
