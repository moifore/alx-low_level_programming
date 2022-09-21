#include "main.h"
/**
 * reverse_array - Entry point
 * @a: character being used
 * @n: character being used
 * Return: Always 0 Success
 */
void reverse_array(int *a, int n)
{
		int tmp, index;

		for (index = n - 1; index >= n / 2; index--)
		{
			tmp = a[n - 1 - index];
			a[n - 1 - index] = a[index];
			a[index] = tmp;
													}
}
