#include<stdio.h>
/**
 * _print_rev_recursion - print a string in recusive way
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i = _strlen_recursion(s + 1);
		return (i + 1);
	}
}
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}