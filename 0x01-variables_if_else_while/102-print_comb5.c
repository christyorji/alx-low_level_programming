#include <stdio.h>

int main() {
    // Loop through all possible combinations of two two-digit numbers
    int num1, num2;
    for (num1 = 0; num1 <= 99; num1++) {
        for (num2 = num1; num2 <= 99; num2++) {
            // Print the first number with leading zeros if necessary
            putchar((num1 / 10) + '0');
            putchar((num1 % 10) + '0');
            putchar(' ');

            // Print the second number with leading zeros if necessary
            putchar((num2 / 10) + '0');
            putchar((num2 % 10) + '0');

            // Print the comma and space separator
            putchar(',');
            putchar(' ');
        }
    }

    return 0;
}
