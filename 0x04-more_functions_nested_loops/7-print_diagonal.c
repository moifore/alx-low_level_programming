#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: character printed
 */
void print_diagonal(int n)
{
		int m, p;

		if (n > 0)
		{
			for (m = 0; m < n; m++)
			{
				for (p = 0; p < m; p++)
					_putchar(' ');
														_putchar('\\');

				if (m == n - 1)
					continue;
				_putchar('\n');
			}
		}
		_putchar('\n');
}
