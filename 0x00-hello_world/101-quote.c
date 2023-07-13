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
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = strlen(message);

    if (write(STDERR_FILENO, message, len) != len)
    {
        /* Error writing to stderr */
        _exit(1);
    }

    return 1;
}
