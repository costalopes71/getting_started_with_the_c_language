#include <stdio.h>

int main()
{
    
    int first_number;
    int second_number;

    printf("Please enter an integer: ");
    scanf("%d", &first_number);
    printf("Please enter another integer: ");
    scanf("%d", &second_number);

    if (first_number > second_number) {
        puts("first_number > second_number");
    } else if (first_number < second_number) {
        puts("first_number < second_number");
    } else {
        puts("first_number == second_number");
    }

    return 0;
}
