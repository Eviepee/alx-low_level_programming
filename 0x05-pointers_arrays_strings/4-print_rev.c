#include <string.h>
#include "main.h"

/**
 *print_rev - Prints a string in reverse order
 *@s: string to reverse
 *Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
