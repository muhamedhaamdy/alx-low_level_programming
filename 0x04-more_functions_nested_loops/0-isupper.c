#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * Description: program using builtin bunction isupper
 *
 * Return: Always 0.
 */
int main(void)
{
char c;

c = 'A';
if (isupper(c))
	printf("%c: 1\n", c);
else
	printf("%c: 0\n", c);
c = 'a';
if (isupper(c))
	printf("%c: 1\n", c);
else
	printf("%c: 0\n", c);
return (0);
}
