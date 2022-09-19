#include "main.h"
/**
 * swap_int - Entry point
 * @a: value used
 * @b: value used again
 * Return: Always 0 Success
 */
void swap_int(int *a, int *b)
{
		int c;

		c = *a;
		*a = *b;
		*b = c;
}
