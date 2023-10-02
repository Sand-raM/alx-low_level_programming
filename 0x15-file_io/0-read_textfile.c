#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: is the number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t r, w;
	char *c;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		close(i);
		return (0);
	}
	r = read(i, c, letters);
	close(i);
	if (r == -1)
	{
		free(c);
		return (0);
	}
	w = write(STDOUT_FILENO, c, r);
	free(c);
	if (r != w || w == -1)
	{
		return (0);
	}
	return (w);
}
