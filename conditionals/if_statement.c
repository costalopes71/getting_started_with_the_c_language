#include <stdio.h>
#include <string.h>

int main()
{
    
    char password[50];

    printf("Enter password: ");
    scanf("%49s", password);

    if (strcmp(password, "Banana") == 0) {
        puts("Correct password! :D");
    } else {
        puts("Wrong password! :(");
    }

    return 0;
}
