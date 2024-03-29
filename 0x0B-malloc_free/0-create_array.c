#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char.
 * @size: The size of the array to create.
 * @c: The character with which to initialize the array.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
