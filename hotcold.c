#include<stdio.h>

//function declaration

int findTemp(int hot);

//main function 

int main()
{

    int temp;
    printf("enter temp :");
    scanf("%d",&temp);

    findTemp(temp);
    return 0;
}

//functoin definiton 
int findTemp(int hot)
{

    if(hot > 30)
    {
        printf("hot temperture");

    }
    

    else{

        printf("cold temperture");
    }

    return hot;
}
