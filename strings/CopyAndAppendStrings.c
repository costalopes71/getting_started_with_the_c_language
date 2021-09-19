#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    char first_name[] = "Joao";

    printf("%s\n", first_name);

    char last_name[] = "Lopes";

    char fullname[20];

    /* 
    THESE STRING FUNCTIONS ARE UNSAFE!
    */

    strcpy(fullname, first_name); // copy (dest, source)
    strcat(fullname, " "); // append (dest, source)
    strcat(fullname, "Banana :)");

    // BUFFER OVERFLOW!!!
    printf("Full name: %s\n", fullname);

    // Safer code!
    char fullNameSafe[50];

    strncpy(fullNameSafe, first_name, sizeof(fullNameSafe));
    //strncat(fullNameSafe, " ", sizeof(fullNameSafe));
    strncat(fullNameSafe, last_name, sizeof(fullNameSafe));

    puts(fullNameSafe);

    return 0;
}
