#include <stdio.h>

int main(int argc, char **argv)
{
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Hello, %s!\n", name);

    return 0;
}