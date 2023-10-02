#include "main.h"
/**
 * append_text_to_file - append a string to a file
 *
 * @filename : the name of the file
 * @text_content : a string that append to the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filePtr = open(filename, O_WRONLY | O_APPEND);
	size_t i = 0;
	ssize_t bytes;

	if (filePtr == -1 || !filename)
		return (-1);
	while (text_content &&  text_content[i])
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
