#include <stdio.h>
#include <stdlib.h> // contains definition of srand() and rand()
#include <time.h>   // needed for the function time()

int main() {

    int i;
    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        printf("%4d", rand() % 100 + 1);
    }

    printf(" \n");

    return 0;
}
