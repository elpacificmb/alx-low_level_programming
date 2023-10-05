#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * Prototype: int get_endianness(void).
 * Return: 1, if architecture is little endian, 0 in case of big endian.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
