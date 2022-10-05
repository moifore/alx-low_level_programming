#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: returns a pointer to the duplicated string. It returns NULL
 */
char *_strdup(char *str)
{
	char *ar;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;

	ar = malloc((len + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		ar[index] = str[index];
	ar[len] = '\0';

	return (ar);
}
