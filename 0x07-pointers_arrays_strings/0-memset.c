#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: string to be fillled
 * @b: bytes too fill with
 * @n: number of spaces to fill
 * Return: Always s success
 */
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			*(s + i) = b;
		}
		return (s);
}
