#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (indicating program execution)
 */
int main(void)
{
const char *message = "and that piece of art is useful\" 
- Dora Korpar, 2015-10-19\n";
	ssize_t len = strlen(message);
	ssize_t bytes_written = 0;
	int write_error = 0;

	while (bytes_written < len)
	{
ssize_t result = write(STDERR_FILENO, message 
+ bytes_written, len -  bytes_written);
		if (result < 0)
		{
		write_error = 1;
		break;
		}
		bytes_written += result;
	}

	if (write_error)
	{
	/* Error writing to stderr */
	_exit(1);
	}
return (1)
}
