#include <stdio.h>

// Function declaration
float areasquare(float side);
float circlearea(float radius);
float arearectangle(float length, float width);

// Main function
int main()
{
    float a, b, c, length, width;
    printf("Enter side length of square 1: ");
    scanf("%f", &a);
    printf("Enter side length of square 2: ");
    scanf("%f", &b);
    printf("Area of square 1 is: %f\n", areasquare(a));
    printf("Area of square 2 is: %f\n", areasquare(b));

    printf("Enter area of circle: ");
    scanf("%f", &c);
    printf("Area of circle is: %f\n", circlearea(c));
    
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    printf("Area of rectangle is: %f\n", arearectangle(length, width));

    return 0;
}

float areasquare(float side)
{
    return side * side;
}

float circlearea(float radius)
{
    return 3.14 * radius * radius;
}

float arearectangle(float length, float width)
{
    return length * width;
}

