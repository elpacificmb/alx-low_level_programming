#include "main.h"
/**
 * *string_toupper - capitalize a string
 * @str: pointer
 * Return: capitalzied string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	return (str);
}

