#include <stdio.h>

int main() {
    // Loop from 0 to 9
    int i;
    for (i = 0; i <= 9; i++) {
        // Convert the number to its ASCII representation
        char digit = i + '0';
        // Print the digit using putchar
        putchar(digit);
    }

    // Print a new line using putchar
    putchar('\n');

    return 0;
}
