#include "main.h"
/**
 * print_rev - Entry point
 * @*s: string being used
 * @s: character used
 * Return: Always 0 Success
 */
void print_rev(char *s)
{
		int fcounter = 0;
		int i, n;

		for (i = 0; s[i] != '\0'; i++)
		{
			fcounter++;
		}

		for (n = (fcounter - 1); n >= 0; n--)
		{
			_putchar(s[n]);
		}
		_putchar('\n');
}
