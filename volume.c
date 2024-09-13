#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, height, volume;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;

    printf("Volume of cylinder = %f\n", volume);

    return 0;
}