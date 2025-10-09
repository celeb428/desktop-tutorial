//simple c program
/*
name:caleb ngugi mburu
reg:ct100/g/26188/25
description:withdraws
date:
*/

#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter your starting account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;
        printf("Remaining balance: %.2f\n", balance);

        if (balance <= 0) {
            printf("Insufficient balance. Transaction stopped.\n");
        }
    }

    return 0;
}

