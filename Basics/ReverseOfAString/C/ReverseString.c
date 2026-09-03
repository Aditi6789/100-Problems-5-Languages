#include <stdio.h>
#include <string.h>

int main() {

    char originalStr[] = "Hello";
    char reversedStr[strlen(originalStr) + 1];

    int j = 0;

    for (int i = strlen(originalStr) - 1; i >= 0; i--) {

        reversedStr[j++] = originalStr[i];
    }

    reversedStr[j] = '\0';

    printf("Original String : %s\n", originalStr);
    printf("Reversed String : %s\n", reversedStr);

    return 0;
}