#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf(1, "Error: Hello. Usage: hello <name>");
        exit();
    }

    printf(1, "Hello, %s!", argv[1]);
    exit();
}