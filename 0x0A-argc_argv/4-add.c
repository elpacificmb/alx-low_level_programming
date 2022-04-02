#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned int i, sum, num;

	sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (sum);
}

