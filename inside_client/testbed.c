#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    printf("Error(%d): %s\n", 2, strerror(2));

    return 0;
}
