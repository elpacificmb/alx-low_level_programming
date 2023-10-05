#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{

	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/*should end with a end of string char*/
	dest[dest_len + i] = '\0';

	return (dest);
}

