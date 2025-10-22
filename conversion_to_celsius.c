//
/*
name:caleb ngugi mburu
reg:ct100/g/26188/25
description:conversion to celsius
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(f));
    return 0;
}
