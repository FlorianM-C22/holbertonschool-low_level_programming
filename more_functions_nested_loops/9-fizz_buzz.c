#include <stdio.h>

/**
 *main - prints numbers 1 to 100 but multiples of 3 prints fizz
 *and multiples of 5 prints buzz
 *@size: number of lines
 *Return: 0 Success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
}
