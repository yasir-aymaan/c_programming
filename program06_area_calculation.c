#include <stdio.h>

int main() {
    float length = 5, width = 3;
    float area_rect = length * width;

    float base = 4, height = 2;
    float area_tri = 0.5 * base * height;

    printf("Rectangle Area = %.2f\n", area_rect);
    printf("Triangle Area = %.2f\n", area_tri);

    return 0;
}