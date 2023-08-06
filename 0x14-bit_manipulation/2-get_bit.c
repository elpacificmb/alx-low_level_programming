#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * get_bit - Write a function that returns the value of a bit at a
 * given index.
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: bit value in the index.
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
