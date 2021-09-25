#include <stdio.h>
#include <string.h>

int main()
{

    char word[] = "Connie is Learning C";

    // incremet 2 for the * on the begin and end of the word    
    int wordLenght = strlen(word)+2;

    // top * line
    for (int i=0; i<wordLenght; i++) {
        putchar('*');
    }
    putchar('\n');

    // print the word with * at the beggning and end
    putchar('*');
    printf("%s", word);
    putchar('*');

    // botton * line 
    putchar('\n');
    for (int i=0; i<wordLenght; i++) {
        putchar('*');
    }
    putchar('\n');

    return 0;
}
