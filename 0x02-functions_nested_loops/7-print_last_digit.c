#include "main.h"

/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */

int print_last_digit(int n)
{

    n = n >= 0 ? n : n * -1;
    int last = n % 10;
    _putchar('0' + last);

    return (last);
}