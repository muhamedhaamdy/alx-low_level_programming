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
	int filePtr;
	size_t i = 0;
	int ch;

	if (!filename)
		return (0);
	filePtr = fopen(filename, O_RDONLY);
	if (filePtr == -1)
		return (0);
	while ((ch = fgetc(filePtr)) != EOF && i < letters)
	{
		putchar(ch);
		i++;
	}
	fclose(filePtr);
	return (i);
}
