#include <stdio.h>

// Function prototype
float convert_to_Celsius(float fahrenheit);

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convert_to_Celsius(fahrenheit);

    printf("Temperature in Celsius = %.2f°C\n", celsius);

    return 0;
}

// Function definition
float convert_to_Celsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}