#include<stdio.h>

//function declaration 
int sum(int x, int y );

int main()
{

    int a , b;
    printf("enter first number :");
    scanf("%d", &a);
    printf("enter second number :");
    scanf("%d", &b);
    
       int s = sum(a,b);
    
    printf("sum is : %d", s);
    return 0;


}

//function defifniton 

    int sum(int x, int y)
    {
        return x + y;
    }