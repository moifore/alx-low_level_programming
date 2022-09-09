#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
		int num;

		for (num = '0'; num <= '9'; num++)
			putchar(num);
		putchar('\n');
		return (0);
}
