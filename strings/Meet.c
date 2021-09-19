#include <stdio.h>

int main(int argc, char const *argv[])
{

    printf("What's your name? ");

    char name[40];

    scanf("%39s", name);

    printf("\nNice to meet you %s!\n", name);

    return 0;
}
