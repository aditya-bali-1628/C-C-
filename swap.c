#include<stdio.h>

//function declaration

int _swap(int* a, int* b);


//int main function 
int main()
{
    int x = 7, y = 8;
   
    _swap(&x,&y);
    printf("x = %d\n y = %d\n",x,y);
    return 0;
}

//call by refrance
int _swap(int* a, int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;    
}



