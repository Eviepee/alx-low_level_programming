#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet
 *
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int n, e;

	for (e = 0; e <= 9; e++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
