//SIMPLE C PROGRAM
/*
name:caleb ngugi mburu
date:06/10/25
details:password
reg:ct100/G/26188/25
*/
#include <stdio.h>

int main() {
    char password[10];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");

    return 0;
}


