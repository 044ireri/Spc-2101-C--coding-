


    #include <stdio.h>

int main() {
    float height;
    double bankBalance;
    char phoneNum[10];

    // Prompt for height
    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    // Prompt for bank balance
    printf("Enter your bank balance: $");
    scanf("%lf", &bankBalance);

    // Prompt for phone number
    printf("Enter your phone num: ");
    scanf("%s", phoneNum);  // Accepts string input without spaces

    // Display the entered information
    printf("\n--- Your Information ---\n");
    printf("Height       : %.2f cm\n", height);
    printf("Bank Balance : $%.2lf\n", bankBalance);
    printf("Phone Num: %s\n", phoneNum);

    return 0;
}