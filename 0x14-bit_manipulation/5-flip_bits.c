#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip bits
 *
 * @n: The number passed to the function
 * @m: The number to flip n to
 *
 * Return: The number of bits to flip to get from @n to @m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
