#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Successfull)
 */
int main(int argc, char **argv)
{
	int n, ex;

	ex = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		ex = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (ex);
}
