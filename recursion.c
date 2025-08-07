#include<stdio.h>

// function declaration 
int sum(int n);

//function definiton 
int main()
{
    int num;
    printf("enter a positive number :");
    scanf("%d",&num);

   int  sumnum = sum(num);
   printf("sum is %d \n", sumnum, sum);

   
    
    return 0;
}

//function defifniton

int sum(int n)
{

    if(n == 1)
    {
        return 1;
    }

    int sumn1 = sum(n-1);
    int sumn = sumn1 + n; 
}