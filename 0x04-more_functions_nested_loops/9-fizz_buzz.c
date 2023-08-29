#include <stdio.h>

/**
 * prints the numbers from 1 to 100 followed by a new line 
 * multiples of three print Fizz
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 */

void fizzbuzz(int n);

int main(void)
{
	fizzbuzz(100);
	
	return(0);
}

void fizzbuzz(int n)
{
    int i;

	for (i = 1; i <= n; i++)
    {
        if (i % 15 == 0)
	{
            printf("fizzbuzz");
        }
        else if (i % 5 == 0)
	{
            printf("buzz");
        }
        else if (i % 3 == 0)
	{
            printf("fizz");
        }
        else
	{
            printf("%d", i);
        }
	printf(" ");
    }
    printf("\n");
}
