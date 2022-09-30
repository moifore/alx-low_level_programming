#include <stdio.h>
#include <stdlib.h>
/**
 * main - program multiplies two numbers recieved from standard input
 * @argc: number of arguments apssed to the function
 * @argv: an argument vector of pointers to strings
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;
	printf("%d\n", res);
	return (0);
}

