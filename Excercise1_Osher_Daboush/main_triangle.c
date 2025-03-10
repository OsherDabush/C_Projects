#include <stdio.h>
#include "main_triangle.h"

int main() {
    int n;
    int excercise;
    char ch;

    printf("Enter the number of lines (N): ");
    scanf("%d", &n);

    printf("Enter the character to print: ");
    scanf(" %c", &ch);
    
    printf("Enter the excercise number: ");
    scanf(" %d", &excercise);
    
    if (n > 0) {
        switch (excercise) {
            case 1:
                triangle1(n, ch);
                break;
            case 2: 
                triangle2(n, ch);
                break;
            case 3: 
                triangle3(n, ch);
                break;
            case 4:
                triangle4(n, ch);
            case 5:
                triangle4(n, ch);
                break;
            case 6: 
                triangle6(n, ch);
                break;
            default: 
                break;
        }
    }
    
    return 0;
}

