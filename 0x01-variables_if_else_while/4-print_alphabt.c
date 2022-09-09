#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			if (letter != 'q' && letter != 'e')
				putchar(letter);
		}
		putchar('\n');
		return (0);
}
