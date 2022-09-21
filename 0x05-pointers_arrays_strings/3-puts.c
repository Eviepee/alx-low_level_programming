
#include "main.h"

/**
 *_puts - Prints a string
 *@str: string.
 *
 * Description: prints a string
 * On success: returns no error
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
