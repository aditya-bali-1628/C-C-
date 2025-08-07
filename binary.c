#include<stdio.h>

//function declaration
int decimalTObinary(int decimalnum );

//main functon logic
    int main()
{

    int decimal;
    printf("enter number : ");
    scanf("%d",&decimal);

    decimalTObinary(decimal);
    return 0;

}


//functoin defination 

int decimalTObinary(int decimalnum )
{
    int i = 0;
    int bainary[30];

    if( decimalnum == 0)
    {
        printf(" bianary represtation 0!");
    }
    
    while(decimalnum > 0)
    {
        bainary[i] = decimalnum % 2;
        decimalnum = decimalnum / 2;
        i++;

    }  

    for(int j=i - 1; j >= 0; j-- )
    {
        printf("%d",bainary[j]);
    }
    printf("\n");
    return 0;

}
