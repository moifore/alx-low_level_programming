#include "main.h"
/**
 * _puts - Entry point;
 * @str: string being used
 * Return: Always 0 Sucess
 */
void _puts(char *str)
{
		while (*str)
			_putchar(*str++);

		_putchar('\n');
}
