#include <stdio.h>

// Function prototype
int findMax(int num1, int num2, int *max);

int main() {
    int num1, num2;
    int maximum;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (findMax(num1, num2, &maximum)) {
        printf("The maximum number is: %d\n", maximum);
    } else {
        printf("Error finding the maximum.\n");
    }

    return 0;
}

// Function definition
int findMax(int num1, int num2, int *max) {
    if (num1 > num2) {
        *max = num1;
    } else {
        *max = num2;
    }
    return 1; // Return 1 to indicate that the maximum was found
}

