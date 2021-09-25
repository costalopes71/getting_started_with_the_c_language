#include <stdio.h>
#include <string.h>

int main()
{

    int counter = 0;
    char answer[10];

    do {
    counter++;

    printf("Iteraction #%d\n", counter);

    printf("Do you want to continue? [Enter NO to quit] ");
    scanf("%9s", answer);

    } while (strcmp(answer, "NO") != 0);
    
    return 0;
}
