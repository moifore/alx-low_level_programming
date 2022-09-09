#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase, and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
		char (letter);
		char (LETTER);

		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
			putchar(LETTER);
		return (0);
}
