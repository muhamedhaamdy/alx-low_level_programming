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
	int file_descriptor = open(filename, O_RDONLY);
	size_t i = 0;
	char ch;

	if (file_descriptor == -1 || !filename)
		return (0);
	while (i < letters && read(file_descriptor, &ch, 1) == 1)
	{
		putchar(ch);
		i++;
	}
	if (close(file_descriptor) == -1)
		return (0);
	return (i);
}
