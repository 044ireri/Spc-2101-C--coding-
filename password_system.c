#include <stdio.h>

int main() {
    char password[20];
    const char correctPassword[] = "1234";
    do {
        printf("Enter password: ");
        scanf("%s", password);
        if (strcmp(password, correctPassword) != 0) {
            printf("Incorrect password. Try again.\n\n");
        }
    } while (strcmp(password, correctPassword) != 0);
    printf("Access granted\n");
    return 0;
}