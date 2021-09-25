#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char word[] = "Connie is Learning C";    

    printf("%s\n", word);

    // print the underlines
    int stringLenght = strlen(word);
    for (int i = 0; i < stringLenght; i++)
    {
        putchar('-');
    }
    putchar('\n');

    return 0;
}
