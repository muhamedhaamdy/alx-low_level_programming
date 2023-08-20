#include<stdio.h>

/**
 * main - main function
 *
 * description : print all numbers by 1024 that divisble by 3 and 5
 *
 * return : always 0
 * */

int main(void)
{
	int i, sum = 0; 

	for (i = 1; i < 1024; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
