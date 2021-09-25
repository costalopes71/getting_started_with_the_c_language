#include <stdio.h>
#include <string.h>

int main()
{
    
    char word[] = "Joaozao";

    int length = 0;
    while(word[length] != '\0') {
        length++;
    }

    printf(" String: \"%s\" \n", word);
    printf(" Length: %d chars", length);

    return 0;
}
