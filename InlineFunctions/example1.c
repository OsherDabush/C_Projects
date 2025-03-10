#include <stdio.h>

inline int square(int x) {
    return x * x;
} 

int main() {
    int result = square(5);
    printf("Square: %d\n", result);
    return 0;
}
