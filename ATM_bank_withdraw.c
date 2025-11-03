#include <stdio.h>

int main() {
    float balance = 2000;   // starting balance fixed at 2000
    float amount;

    printf("Your starting balance is: %.2f\n", balance);
    // Withdraw money while balance is greater than 0
    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &amount);
        balance -= amount;
        if (balance > 0) {
            printf("Withdrawal successful. Remaining balance: %.2f\n", balance);
        } else {
            printf("Insufficient funds .\n");
            printf("Final balance: %.2f\n", balance);
        }
    }
    printf("\ninsufficient funds in your account .\n");
    return 0;
}