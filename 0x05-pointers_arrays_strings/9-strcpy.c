#include "main.h"
/**
 * *_strcpy - mained
 * @dest: hello
 * @src: character
 * Return: Always 0 Success
 */
char *_strcpy(char *dest, char *src)
{
		int i, j;

		i = 0;

		while (src[i] != 0)
			i++;

		for (j = 0; j <= i; j++)
			dest[j] = src[j];
		return (dest);
}
