#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the file name
 * @text_content: the content of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	file = open(filename,  O_WRONLY | O_APPEND, 660);
	if (file == -1)
		return (-1);
	write(file, text_content, i);

	return (1);
}