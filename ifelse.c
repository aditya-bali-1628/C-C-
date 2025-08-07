#include<stdio.h>
int main()
{

    int age;
    printf("enter a age : ");
    scanf("%d", &age);

    if(age >= 18){

        printf(" they are adult\n");
        printf("they can vote\n");
        printf("they can drive \n");
        

    }

    else {
        printf(" not adult \n");
    }

    printf("thank you");

}