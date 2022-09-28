#include "main.h"
/**
 * prime_check - checks whether the number is prime
 * @fc: factor checker
 * @pn: possible prime number
 * Return: 1 if prime and 0 if not
 */
int prime_check(int fc, int pn)
{
	if (pn < 2 || pn % fc == 0)
		return (0);
	else if (fc > pn / 2)
		return (1);
	else
		return (prime_check(fc + 1, pn));
}
/**
 * is_prime_number - returns prime number
 * @n: number passed
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
