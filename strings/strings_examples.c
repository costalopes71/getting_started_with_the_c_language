#include <stdio.h>

/*
Strings are represented as a char array in C language. The array MUST terminate with the Null Terminate (\0). If we fail to remember to terminate the string with the null terminate, than a code reading the string will continue reading it after its finished, and will cause sutle bugs because its reading data that its not the string anymore.
*/

int main(int argc, char const *argv[])
{

    char anChar = 'C';

    char name[] = "Joao";

    if (anChar == 67) {
        printf("A char is an int number that represents the ASCII number for that letter! :D\n\n");
    }

    int arraySize = sizeof(name);

    printf("Always remember, an array of chars representing a string must always terminate with the null terminate (\\0). Example: the char array containing the string Joao has size of %d\n\n", arraySize);

    char userInput[40];

    printf("Enter your name (39 letters max): ");
    scanf("%39s", userInput); // here I dont need the & to tell the memory address because in C the name of the array already tells the memory address of its first element

    printf("The user name is: %s\n", userInput);

    return 0;
}
