#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - get the lenght of the string
 * @s : the string
 * Return: the length of the string
*/
int _strlen(char *s)
{
	int i = 0, j;
	char *err = "Error\n";

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
		{
			for (j = 0; err[j] != '\0'; j++)
				_putchar(err[j]);
			exit(98);
		}

	}
	return (i);
}
/**
 * main - entry funciton
 * @ac : number of arguments
 * @av : array of arguments
 * Return: always 0
 */
int main(int ac, char *av[])
{
	char *err = "Error\n";
	int l1, l2, i, j, tmp;
	int a[10000], b[10000], ans[20000];

	l1 = _strlen(av[1]);
	l2 = _strlen(av[2]);
	if (ac != 3)
	{
		for (j = 0; err[j] != '\0'; j++)
			_putchar(err[j]);
		exit(98);
	}
	for (i = l1 - 1, j = 0; i >= 0; i--, j++)
		a[j] = av[1][i];
	for (i = l2 - 1, j = 0; i >= 0; i--, j++)
		b[j] = av[2][i];
	for (i = 0; i < l2; i++)
	{
		for (j = 0; j < l1; j++)
			ans[i + j] = b[i] * a[j];
	}
	for (i = 0; i < l1 + l2; i++)
	{
		tmp = ans[i] / 10;
		ans[i] %= 10;
		ans[i + 1] += tmp;
	}
	for (i = l1 + l2; i >= 0; i--)
	{
		if (ans[i] > 0)
			break;
	}
	for (; i >= 0; i--)
		_putchar(ans[i] + '0');
	_putchar('\n');
	return (0);
}
