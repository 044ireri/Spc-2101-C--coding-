#include <stdio.h>
int main() {
    int choice;
    // Display bundle options in a table format
    printf("=============================================\n");
    printf("| Option |   Data Bundle   |     Cost (KES)  |\n");
    printf("=============================================\n");
    printf("|   1    |     100MB       |       50        |\n");
    printf("|   2    |     500MB       |      200        |\n");
    printf("|   3    |      1GB        |      350        |\n");
    printf("|   4    |      2GB        |      600        |\n");
    printf("=============================================\n");
    // Ask user to enter their choice
    printf("Enter your choice (1 to 4): ");
    scanf("%d", &choice);
    // Use switch statement to display the selected bundle and cost
    switch (choice) {
        case 1:
            printf("You selected 100MB. Cost: KES 50\n");
            break;
        case 2:
             printf("You selected 500MB. Cost: KES 200\n");
            break;
        case 3:
            printf("You selected 1GB. Cost: KES 350\n");
            break;
        case 4:
            printf("You selected 2GB. Cost: KES 600\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }
    return 0;
}

    
    
    
    

     
