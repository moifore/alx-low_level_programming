#include "main.h"
/**
 * _strcmp - Compares pointers to two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: Always 0 Success
 */
int _strcmp(char *s1, char *s2)
{
		int i;

		for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
		}
		return (0);
}
