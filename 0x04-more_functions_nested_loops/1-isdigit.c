#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: character being tested
 * Return: Always 1 and 0
 */
int _isdigit(int c)
{
		if (c >= '0' && c <= '9')
			return (1);

		else
			return (0);
}
