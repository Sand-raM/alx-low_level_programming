#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: is the name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, rw;

	if (!filename)
		return (-1);
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (i == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (fd = 0; text_content[fd]; fd++)
		;
	rw = write(i, text_content, fd);
	if (rw == 1)
		return (-1);
	close(i);
	return (1);
}
