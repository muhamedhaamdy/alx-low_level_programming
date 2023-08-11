#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : last digit in a number 
 *
 *Return: Always 0 (Success) 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;
	if (last == 0)
		printf("Last digit of %d is %d and is 0", n, last);
	else if (last < 6)	
		printf("Last digit of %d is %d  and is less than 6 and not 0", n, last);
	else 
		printf("Last digit of %d is %d and is greater than 5", n, last);
	return (0);
}
