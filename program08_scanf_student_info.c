#include <stdio.h>

int main() {
    int id;
    float cgpa;
    char grade;

    printf("Enter ID, CGPA and Grade: ");
    scanf("%d %f  %c", &id, &cgpa, &grade);

    printf("\n--- Student Info ---\n");
    printf("ID: %d\n", id);
    printf("CGPA: %.2f\n", cgpa);
    printf("Grade: %c\n", grade);

    return 0;
}