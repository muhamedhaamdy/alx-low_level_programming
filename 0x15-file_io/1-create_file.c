#include "main.h"
/**
 * read_textfile - read the text file
 *
 * @filename : the name of the file
 * @letters : number of letter in the film :we
 * Return: the acual number of letter that could read
 */
int create_file(const char *filename, char *text_content){
	FILE *filePtr = fopen(filename, "r");
	size_t i = 0;
	int ch;

	if (!filePtr || !filename)
	{
		if (filePtr)
			fclose(filePtr);
		return (0);
	}
	while ((ch = fgetc(filePtr)) != EOF && i < letters)
	{
		_putchar(ch);
		i++;
	}
	fclose(filePtr);
	return (i);
}
