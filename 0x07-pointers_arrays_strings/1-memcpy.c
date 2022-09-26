#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: paste string
 * @src: copy string
 * @n: number of area
 *
 * Return: pointter to memory dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			*(dest + i) = *(src + i);
		}
		return (dest);
}
