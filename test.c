#include <stdio.h>

void say_hello(char* name) {
    printf("Hello, %s!\n", name);
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        say_hello("World");
    } else {
        for (int i = 1; i < argc; i++) {
            say_hello(argv[i]);
        }
    }
    return 0;
}
