#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char word[40];

    printf("Type a word: ");
    scanf("%39s", word);

    int size = sizeof(word);
    int lenght = strlen(word);

    printf("\nBuffer size: %d; string lenght: %d\n", size, lenght);

    return 0;
}
