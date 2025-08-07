#include<stdio.h>

int main()
{   
    float rate, qnt,totalm;

    printf("enter rate of product : ");
    scanf("%f",&rate);
    printf("enter quntity of product : ");
    scanf("%f",&qnt);

    totalm = (rate * qnt);
    if(totalm > 1000)
    {
        totalm = 0.10;
        
    }
    else{

        totalm = 0;
    }

    totalm = ( totalm = rate * qnt / 100);

    printf("your expinsis is %f\n", totalm);

    return 0;
}