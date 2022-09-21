#include "main.h"
/**
 * *_strncpy - Entry point
 * @dest: character being used
 * @src: second character being used
 * @n: third character being used
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
		int i = 0, j = 0;

		while (src[i++])
			j++;

		for (i = 0; src[i] && i < n; i++)
			dest[i] = src[i];

		for (i = j; i < n; i++)
			dest[i] = '\0';

		return (dest);
}
