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
	ssize_t fd_o, fd;

	if (filename == NULL)
		return (0);
	fd_o = open(filename, O_RDONLY);
	fd = read(fd_o, (void *)filename, letters);
	if (fd == -1)
		return (0);
	fd = write(STDOUT_FILENO, (void *)filename, fd);
	if (fd == -1 || fd_o == -1)
		return (0);
	close(fd_o);
	return (fd);
}
