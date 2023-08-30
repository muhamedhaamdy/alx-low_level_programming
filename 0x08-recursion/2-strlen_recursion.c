#include<stdio.h>
/**
 * _print_rev_recursion - print a string in recusive way
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (i);
	i++;
	_strlen_recursion(s + i);
}
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
