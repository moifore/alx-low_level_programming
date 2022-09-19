#include "main.h"
/**
 * _strlen - Entry point
 * @s: string being used
 * Return: Always 0 Success
 */
int _strlen(char *s)
{
		int i;

		i = 0;

		while (*s != '\0')
		{
			i++;
			s++;
		}
		return (i);
}
