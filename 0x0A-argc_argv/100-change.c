#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int value, c;

	c = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (value % 25 >= 0)
	{
		c += value / 25;
		value = value % 25;
	}
	if (value % 10 >= 0)
	{
		c += value / 10;
		value = value % 10;
	}
	if (value % 5 >= 0)
	{
		c += value / 5;
		value = value % 5;
	}
	if (value % 2 >= 0)
	{
		c += value / 2;
		value = value % 2;
	}
	if (value % 1 >= 0)
	{
		c += value / 1;
	}
	printf("%d\n", c);
	return (0);
}

