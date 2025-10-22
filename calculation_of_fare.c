//
/*
name:caleb ngugi mburu
reg:ct100/g/26188/25
description:calculation of fare
*/
#include <stdio.h>

float calculateFare(float distance) {
    float ratePerKm = 50.0;
    float totalFare = distance * ratePerKm;
    return totalFare;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total Fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}
