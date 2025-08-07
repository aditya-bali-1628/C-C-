#include<stdio.h>

//function declaration 

float numsqure(float num);

// main function 

int main()

{

    float squr ,number;
    printf("enter number : ");
    scanf("%f", &squr);

    squr = number * number;

    printf("square of number is : %f", numsqure(squr));
    printf("square of number is : %f", numsqure(number));

    return 0;


}

//function defintion 

float numsqure(float squre)
{
    float numer;

    squre = numer * numer;
    return squre;
}
