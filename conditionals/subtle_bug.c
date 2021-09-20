#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // wrong! We should use == for equality. With = we are assign a value to the variable number, = is an operator and it returns the number that have been assigned. Booleans in C are integers, 0 to false and any value diferent than 0 to true.
    if (number = 52) {
        puts("You entered 52!");
    } else {
        puts("You did NOT entered 52!");
    }

    return 0;
}
