/*2. Temperature Conversion: Write a program that uses two functions to convert temperature from Celsius 
to Fahrenheit and vice versa, respectively and return the converted values. */

#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main()
{
    
    float temperature, convertedTemperature;
    int choice;

    
    printf("Enter temperature value: ");
    scanf("%f", &temperature);

    
    printf("Choose conversion:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    
    if (choice == 1) {
        convertedTemperature = celsiusToFahrenheit(temperature);
        printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, convertedTemperature);
    } else if (choice == 2) {
convertedTemperature = fahrenheitToCelsius(temperature);
        printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, convertedTemperature);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
    

    d=((y*9)/5) + 32;
    scanf("%f",&d);
    printf("temperature in celsius is %d",d);

}


#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}


// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    
    float temperature, convertedTemperature;
    int choice;

    
    printf("Enter temperature value: ");
    scanf("%f", &temperature);

    
    printf("Choose conversion:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    
    if (choice == 1) {
        convertedTemperature = celsiusToFahrenheit(temperature);
        printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, convertedTemperature);
    } else if (choice == 2) {
convertedTemperature = fahrenheitToCelsius(temperature);
        printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, convertedTemperature);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
