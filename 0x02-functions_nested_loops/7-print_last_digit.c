#include "main.h"
/**
 *print_last_digit - a function that prints the last digit of a number
 *@nld: number's last digit result
 *Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int u;

	u = (nld % 10);

	if (u < 0)
	{
		u = (-1 * u);
	}

	_putchar(u + '0');
	return (u);
}
