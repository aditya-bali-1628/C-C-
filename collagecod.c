#include<stdio.h>

int main()
{
    float sellingprice, costprice,profit;
    

    printf("enter a selliing price : ");
    scanf("%f",&sellingprice);
    printf("enter a cost price : ");
    scanf("%f",&costprice);

    profit = (sellingprice - costprice);

    if(profit > 0)
    {
        printf("you made profit is rs %f \n",profit);
    }
    else if(profit < 0)
    {
        printf("you made loss is rs %f\n",-profit);
    }
    else{
        printf("loss");
    }
    return 0;

}
   
    