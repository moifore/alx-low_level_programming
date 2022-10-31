#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdio
 * @filename: a pointer to the name of the file
 * @letters: The number of letters the function reads and prints
 *
 * Return: If the file fails to open - 0
 * o/w - the number of bytes the function can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wr);
}
