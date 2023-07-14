include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to the variable 'n'
 * and prints the last digit of the number along with a specific message
 * based on its value.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Calculate the last digit of n */
	int last_digit = n % 10;

	/* Print the last digit and the corresponding message */
	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}
