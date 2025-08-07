#include<stdio.h>
int main()
{
        int isSunday = 1;
        int isSnowing = 1;

        printf("%d ", isSunday &&  isSnowing);
        return 0;



        int isMonday = 1;
        int israining = 1;

        printf("%d \n", isMonday || israining);
        return 0;

        int x;
        printf("enter a number : ");
        scanf("%d", &x);

        printf("%d \n",(x > 9) && (x < 100));

        return 0;
}