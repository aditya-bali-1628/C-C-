#include <stdio.h>
#include <math.h>

double calculateSquare(double num) {
    return num * num;
}

int main() {
    double number;
    
    printf("Enter a number: ");
    scanf("%lf", &number);
    
    double square = calculateSquare(number);
    
    printf("Square of %.2lf is: %.2lf\n", number, square);
    
    return 0;
}
