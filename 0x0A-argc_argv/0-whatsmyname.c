#include <stdio.h>
#include <stdlib.h>

/**
 * main-prints its name, followed by a new line
 *
 * @argc: counts the number of command line arguments
 * @argv: array of pointers that contain the command line argv
 * Return:(0) Always successfull
 */
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
return (0);
}
