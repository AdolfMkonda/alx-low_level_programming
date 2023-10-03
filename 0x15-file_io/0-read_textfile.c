#include "main.h"

/**
 * read_textfile - program that reads a text file and prints the letters
 * @filename: filename to be read
 * @letters: numbers of letters to be printed
 * Return: numbers of letters else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	close(fd);
	free(buf);
	return (w);
}
