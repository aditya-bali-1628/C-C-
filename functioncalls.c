#include<stdio.h>

//function decalration 
int squar(int n);
int square(int* n);

//main function 
int main()
{
    int number;
    printf("enter number : ");
    scanf("%d",&number);
    squar(number);
    printf("squar is : %d\n",squar(number));

    square(&number);

    printf("number  = %d",number);
    return 0;

}

//function defintion 
int squar(int n)
{
    n = n * n ;
    return n;
}

//functoin defifintion
int square(int* n)
{

    
    *n = (*n) * (*n);
    printf("square is  = %d\n",*n);
}