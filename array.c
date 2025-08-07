#include<stdio.h>
int main()

{
    // define the marks 

    int marks[3];

    printf("enter marathi marks : ");
    scanf("%d",&marks[0]);

    printf("enter maths marks : ");
    scanf("%d",&marks[1]);

    printf("enter english marks :");
    scanf("%d",&marks[2]);

    printf(" marathi = %d, maths = %d, english = %d", marks[0], marks[1], marks[2]);

    return 0;
}