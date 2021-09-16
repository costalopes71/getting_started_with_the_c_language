/*
    Fahrenheit to Celsius Temperature Converter
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Prompt the user to enter a temperature value in Fahrenheit
    printf("Please enter a temperature value in Fahrenheit: ");
    float temperatureF;

    // Get user input
    scanf("%f", &temperatureF);

    // Convert from Fahrenheit to Celsius
    float temperatureC = (temperatureF - 32.0) * 5.0 / 9.0; 

    // Print the corresponding temperature value in Celsius
    printf("%.2f °F is equivalent to %.2f °C\n", temperatureF, temperatureC);

    return 0;
}
