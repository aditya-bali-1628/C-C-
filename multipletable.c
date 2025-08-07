#include<stdio.h>

int main()
{

    int n;
    printf("enter number :");
    scanf("%d",n);

    for(int i = n; i <= 10; i++)
    {
        printf("%d\n",n * i);
    }
    return 0;
}