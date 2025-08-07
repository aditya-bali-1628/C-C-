#include<stdio.h>

//function declaration 
int doWork(int  a ,int b ,int *sum, int *prod, int *avg);

//main function
int main()
{
    int x = 5 , y = 4;
    int sum, prod, avg;
    doWork( x,y,&sum,&prod,&avg);
    printf("sum  = %d, prod = %d, avg = %d",sum,prod,avg);
    return 0;  
}

//function declaration
int doWork(int  a ,int b ,int *sum, int *prod, int *avg)
{
     *sum = a + b;
     *prod = a * b;
     *avg = a + b /2;


}
