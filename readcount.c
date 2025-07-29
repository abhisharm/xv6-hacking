#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[]) {
    int readcount = getreadcount();
    printf(1, "The number of times read has been called is: %d\n", readcount);
    exit();
}