#include <stdio.h>
#include <string.h>
#include "strings.h"

int main() {
    char str[MAX_STR_LENGTH + 1];
    char str2[MAX_STR_LENGTH + 1];
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int result[6];

    // Test MyStrCpy
    printf("Enter a string to copy: ");
    fgets(str, sizeof(str), stdin);
    if (strchr(str, '\n')) *strchr(str, '\n') = '\0';
    MyStrCpy(str, str2);
    printf("Copied string: %s\n", str2);

    // Test MyStrCmp
    printf("Comparing 'Osher Daboush' and 'Osher Daboush':\n");
    int cmpResult = MyStrCmp("Osher Daboush", "Osher Daboush");
    printf("Comparison result: %d\n", cmpResult);

    // Test MergeSortedArrays
    MergeSortedArrays(arr1, 3, arr2, 3, result);
    printf("Merged array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Test Squeeze
    printf("Enter a string to squeeze: ");
    fgets(str, sizeof(str), stdin);
    if (strchr(str, '\n')) *strchr(str, '\n') = '\0';
    printf("Enter characters to remove: ");
    fgets(str2, sizeof(str2), stdin);
    if (strchr(str2, '\n')) *strchr(str2, '\n') = '\0';
    Squeeze(str, str2);
    printf("Squeezed string: %s\n", str);

    // Test Location
    printf("Enter a string to search within: ");
    fgets(str, sizeof(str), stdin);
    if (strchr(str, '\n')) *strchr(str, '\n') = '\0';
    printf("Enter the substring to find: ");
    fgets(str2, sizeof(str2), stdin);
    if (strchr(str2, '\n')) *strchr(str2, '\n') = '\0';
    int loc = Location(str, str2);
    if (loc != -1) {
        printf("Substring found at index: %d\n", loc);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}

