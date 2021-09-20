#include <stdio.h>

int main()
{
    
    int max;

    int first_number = 21;
    int second_number = 22;

    max = first_number >= second_number ? first_number : second_number;

    printf("Result of ternary operator: %d", max);

    return 0;
}
