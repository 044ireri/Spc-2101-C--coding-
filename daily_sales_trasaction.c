#include <stdio.h>

int main() {
    FILE *fp;
    float sale, total = 0;

    fp = fopen("sales.txt", "r"); // open for reading
    if (fp == NULL) {
        printf("Error opening sales file!\n");
        return 1;
    }

    while (fscanf(fp, "%f", &sale) == 1) {
        total += sale;
    }

    printf("Total sales for the day: %.2f\n", total);

    fclose(fp);
    return 0;
}
    