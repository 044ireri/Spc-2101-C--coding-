
#include <stdio.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};
int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb"); // open for reading in binary mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Student Results:\n");
    printf("-------------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Name: %s\nReg No: %d\nMarks: %.2f\n\n", s.name, s.regNo, s.marks);
    }
    
    fclose(fp);
    return 0;
}
    