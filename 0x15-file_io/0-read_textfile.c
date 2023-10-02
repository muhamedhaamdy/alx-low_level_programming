#include "main.h"
/**
 * read_textfile - read the text file
 *
 * @filename : the name of the file
 * @letters : number of letter in the file
 * Return: the acual number of letter that could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filePtr = open(filename, O_RDONLY);
	size_t i = 0;
        ssize_t	bytes;
	char buff[1024];

	if (filePtr == -1 || !filename)
		return (0);
	bytes = read(filePtr, buff, sizeof(buff));
	if (bytes == -1)
	{
		close(filePtr);
		return (0);
	}
	letters = ((size_t)bytes >= letters)? letters:(size_t)bytes;
	while (i < letters)
	{
		putchar(buff[i]);
		i++;
	}
	if (close(filePtr) == -1)
		return (0);
	return (letters);
}
