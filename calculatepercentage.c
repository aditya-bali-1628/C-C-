#include<stdio.h>

//function declaration 

float calculatepercentage(float marathi, float eco, float ocm, float account, float sp, float english);

//main function 
int main()
{
    float sci = 88;
    printf("enter marks sci subject : ");
    scanf("%f",&sci);
    float math = 87;
    printf("enter marks math subject :");
    scanf("%f",&math);
    float eng = 77;
    printf("enter marks english subject :");
    scanf("%f",&eng);
    float bio = 65;
    printf("enter marks bio subject : ");
    scanf("%f",&bio);
    float english = 67;
    printf("enter marks english subject : ");
    scanf("%f", &english);
    float it = 50;
    printf("enter marks  IT subject : ");
    scanf("%f",&it);

  printf("total  percentage is : %f",  calculatepercentage(sci,math, eng, bio, english,it));

    return 0;

}

//function definiton 
float calculatepercentage(float marathi, float eco, float ocm, float account, float sp, float english)

{
    return ((marathi + eco + ocm + account + sp + english )/ 6) ;
}

