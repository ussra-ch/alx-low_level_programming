#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: ptr to the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *txt;

	ssize_t file, r, w;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);
	if (filename == 0)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	r = read(file, txt, letters);
	w = write(STDOUT_FILENO, txt, r);

	close(file);
	return (w);
}
