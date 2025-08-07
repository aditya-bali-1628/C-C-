#include<stdio.h>
#include<math.h>

//function declaration

int Convertemp(float celcius);

//main function 

int main()
{
    float temp = Convertemp(66);
    printf("far : %f\n",temp);
    
    return 0;



}

//function definition 
int convertemp(float celcius)
{
    float far = celcius * (9.0/5.0) + 32;
    return far;
}