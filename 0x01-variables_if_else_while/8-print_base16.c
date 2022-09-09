#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program prints all the numbers of base 16 in lowercase
 *
 * Return: Alaways 0 (Success)
 */
int main(void)

{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
