#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: size of string
 * @c: character being used
 * Return:  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int index;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		ar[index] = c;
	return (ar);
}
