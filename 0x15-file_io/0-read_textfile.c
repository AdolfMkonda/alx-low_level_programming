#include "main.h"

/**
 * read_textfile - the program that reads a text file and prints the letters..
 * @filename: file to be read by the program
 * @letters: numbers of letters to be printed..
 *
 * Return: no. of letters else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t w;
	int fp;

	if (filename == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	w = write(STDOUT_FILENO, buffer, letters);

	if (!w)
		return (0);
	close(fp);
	free(buffer);
	return (w);
}
