#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer..
 */
int **alloc_grid(int width, int height)
{
int **s, r, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < height; r++)
	{
		s[r] = malloc(sizeof(int) * width);

		if (s[r] == NULL)
		{
			for (; r >= 0; r--)
			{
				free(s[r]);
			}
			free(s);
			return (NULL);
		}

		for (c = 0; c <= width; c++)
		{
			s[r][c] = 0;
		}
	}
	return (s);

}

