#include <stdio.h>

int main() {
    FILE *fp;
    char title[100];
    fp = fopen("borrowed_books.txt", "a"); // open file in append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(fp, "%s", title); // write to file without removing existing records
    printf("Book title successfully stored.\n");
    
    fclose(fp);
    return 0;
}

    