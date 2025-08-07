#include<stdio.h>

//function defifniton 

int calculateprice(float value);

//main fucntion 
int main()
{
    float value;
    printf("enter value :");
    scanf("%f",&value);

    calculateprice(value); // argument
    printf(" value is : %f\n",value);

    
}

//function definiton 
int calculateprice(float value)
{
     value = value + (0.18 * value);
    printf("finall value is : %f", value);
}