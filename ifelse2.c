#include<stdio.h>
int main()
{

    int marks;
    printf("enter marks : ");
    scanf("%d",&marks);
     if(marks >= 90 && marks <= 100 )
    {
        printf("A++\n");

    }
    else if(marks >= 80 && marks <= 90)
    {

        printf("A+\n");

    }
    else if(marks >= 50 && marks <= 80)
    {

        printf("B\n");

    }
    else if(marks >= 35 && marks <= 50)
    {
        printf("c\n");
    }

    else{
        printf("fail\n");
    }
    printf("all the best \n");

    return 0;
}

