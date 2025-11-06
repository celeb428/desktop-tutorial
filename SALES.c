/* 
NAME:CALEB NGUGI MBURU
REG:CT100/G/26188/25
DES:SALES
*/
#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) { // Read floats
        total += amount;
    }

    fclose(file);

    printf("Total sales for the day: %.2f\n", total);

    return 0;
}