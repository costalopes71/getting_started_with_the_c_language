#include <stdio.h>

int main()
{
    
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // can only by an integral, like chars or integers (for decimals, strings and etc use if else)
    switch (number) {
    case 10:
        puts("You entered ten!");
        break;
    case 64:
        puts("You entered sixty-four!");
        break;
    case 155:
        puts("You entered one hundred fifty five");
        break;
    default:
        puts("You entered a number different than 10, 64 and 155");
        break;
    }

    return 0;
}
