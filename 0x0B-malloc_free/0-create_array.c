#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size
 * @c: constant
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	return (0);
	p = malloc((size) * sizeof(char));
	if (p == '\0')
	return (0);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
return (p);
}

