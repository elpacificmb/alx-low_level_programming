#include "main.h"

/**
 * print_numbers - prints numbers
 * Return:0
 */

void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;

	}
	_putchar('\n');

}
