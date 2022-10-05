#include <unistd.h>

/**
*_putchar - write the character to c stdout
*@c: The character to print
*
*Return: On sucess 1
*On error, -1 is the returned and errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
