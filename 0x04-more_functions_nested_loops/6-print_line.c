#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: character being used
 * Return: Always 0
 */
void print_line(int n)
{
		int m;

		if (n > 0)
		{
			for (m = 0; m < n; m++)
				_putchar('_');
		}
				_putchar('\n');
}
