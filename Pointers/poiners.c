#include <stdio.h>

int main() {
    int a = 5;
    int *p = NULL;

    p = &a;

    printf("The address of the variable a: %x\n", &a);            // ffffdc3c
    printf("The content of the variable p: %x\n", p);             // ffffdc3c
    printf("The content of the variable a: %d\n", a);             // 5
    printf("The content of the variable p points to: %d\n", *p);  // 5
    printf("The address of the pointer a: %x\n\n", &p);           // ffffdc40

    return 0;
}
