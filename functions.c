#include<stdio.h>

//function declaration
 void printnamste();
 void printhello();


int main()
{
    printf("enter nation e for english && i for indian : ");
    char ch;
    scanf("%c",&ch);

    if( ch == 'i')
    {
        printnamste();
    }
    else{
        printhello();

    }
    return 0;

}

// function defifniton 

void printnamste()
{
    printf("namste ");
}

void printhello()
{
    printf("hello");
}