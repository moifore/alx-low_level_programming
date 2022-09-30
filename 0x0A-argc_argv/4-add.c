#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers
 * @argc: number of arguments passed to the argument vector
 * @argv: an argument vector from pointers to strings
 * Return: Awlays 0 on success, 1 on Error
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, x;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
		{
			if (isdigit(argv[i][x]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
