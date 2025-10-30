//
/*
NAME:caleb ngugi mburu
DATE: 30-10-2025
REG:CT100/G/26188/25
DESCRIPTION:daily revenue 1D
*/

#include <stdio.h>

int main() {
    float revenue[7], total = 0, average;
    int i;

    printf("=== Weekly Revenue Tracker ===\n");

    
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    
    average = total / 7.0;

    
    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}
