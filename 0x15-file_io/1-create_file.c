#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the file's created name
 * @text_content: the content of the file
 * Return: 1 on success, -1 on failure (file can not be
 * created,file can not be written,write “fails”,etc
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
	{
		i++;
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	write(file, text_content, i);
	return (1);
}
