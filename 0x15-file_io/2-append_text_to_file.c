#include "main.h"
/**
 * append_text_to_file - the program that appends text at the end of a file
 * @filename: filename.
 *
 * @text_content: added content.
 * Return: 1 else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int numletters;
	int rw;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;
		rw = write(fd, text_content, numletters);
		if (rw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
