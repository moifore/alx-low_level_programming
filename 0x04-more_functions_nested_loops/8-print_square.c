#include "main.h"
/**
 * print_square - prints a square followed by a new line
 * @size: variable described
 */
void print_square(int size)
{
		int n, m;

		if (size > 0)
		{
			for (n = 0; n < size; n++)
			{
				for (m = 0; m < size; m++)
					_putchar('#');

				if (n == size - 1)
					continue;
				_putchar('\n');
			}
		}
		_putchar('\n');
}
