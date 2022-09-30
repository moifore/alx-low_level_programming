#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program passed to argv
 * @argc: total argument passed to array
 * @argv: argument vector pointing to array of strings
 * Return: Always  0 Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
