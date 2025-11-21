include <stdio.h>

#define PI 3.14   // Declaring PI as a constant

// Function to calculate perimeter of a circle
float getPerimeter(float r) {
    return 2 * PI * r;
}

int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Perimeter = %.2f\n", getPerimeter(radius));

    return 0;
} write a c progaram which will accepy 3 perimetre l,b,h and returns volue of the cube l*b*h
