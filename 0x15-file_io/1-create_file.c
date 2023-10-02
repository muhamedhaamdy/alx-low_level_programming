#include "main.h"
/**
 * create_file - creat a text file
 *
 * @filename : the name of the file
 * @text_content : a string that written to the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int filePtr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	size_t i = 0;
	ssize_t bytes;

	if (filePtr == -1 || !filename)
		return (-1);
	while (text_content[i])
		i++;
	bytes = write(filePtr, text_content, i);
	if (bytes == -1)
	{
		close(filePtr);
		return (-1);
	}
	if (close(filePtr) == -1)
		return (-1);
	return (1);
}
