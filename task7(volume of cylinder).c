#include <stdio.h>

int main() {
    // Declaring constant value for PI using define
    #define PI 3.14159

    // Declaring variables using float data type
    float radius, height;
    float volume;

    // Taking input for radius and height from user using float data type
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculating volume of the cylinder using formula volume = PI * radius^2 * height
    volume = PI * radius * radius * height;

    // Printing the volume of the cylinder
    printf("The volume of the cylinder is: %f", volume);

    return 0;
}