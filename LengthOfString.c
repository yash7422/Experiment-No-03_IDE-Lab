#include <stdio.h>


int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char myString[] = "Hello, World!";
    int length = stringLength(myString);
    printf("Length: %d\n", length);
    return 0;
}
