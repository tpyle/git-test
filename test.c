#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Hello, World!\n");
    } else if (argc == 2) {
        printf("Hello, %s!\n", argv[1]);
    } else {
        fprintf(stderr, "Error: Too many arguments!\n");
    }
    return 0;
}
