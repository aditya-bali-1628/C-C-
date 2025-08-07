#include<stdio.h>

int main()
{

    int x = 153;
    if (isArmstrong(x) == 1)
        printf("True\n");
    else
        printf("False\n");
 
    x = 1253;
    if (isArmstrong(x) == 1)
        printf("True\n");
    else
        printf("False\n");
 
    return 0;

}