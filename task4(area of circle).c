#include <stdio.h>

// Allocating constant value for PI using define
#define PI 3.14159

int main() {
    // Declaring variables for radius and area using float
    float radius;
    float area;

    // Taking input from user for radius using float data type
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculating area of circle and printing it
    area = PI * radius * radius;
    printf("Area of circle = %f\n", area);

    return 0;
}