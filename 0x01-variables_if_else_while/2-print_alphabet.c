#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
		char (letter);
		char (LETTER);

		for (letter = 'a'; letter <= 'Z'; letter++)
			putchar(letter);
		for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
			putchar(LETTER);
		putchar ('\n');
		return (0);
}
