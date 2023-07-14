#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Initialize random seed
    
    int n = rand() % RAND_MAX;  // Generate random number
    
    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive\n");
    } else if (n < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }

    return (0);
}
