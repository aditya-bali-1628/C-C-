#include<stdio.h>

int main()
{
    int a , b, c;
    printf("enter number one : ");
    scanf("%d ", &a);
    printf("enter number two : ");
    scanf("%d ", &b);

    c = a + b;
    c = a * b;
    c = a % b;
    c = a - b;
    
    printf(" a + b =  :  %d %d %d", a , b , c );

    return 0;
}