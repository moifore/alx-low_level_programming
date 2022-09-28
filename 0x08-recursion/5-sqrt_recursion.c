#include "main.h"
/**
 * sqrt_check - returns the natural square root of a given number
 * @n: number passed
 * @s: square root
 * Return: -1 or sqrt of n
 */
int sqrt_check(int s, int n)
{
	if (s * s == n)
		return (s);
	if (s * s > n)
		return (-1);
	return (sqrt_check(s + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @i: number being used
 * Return: natural square root or -1
 */
int _sqrt_recursion(int i)
{
	if (i == 0)
		return (0);
	return (sqrt_check(1, i));
}
