#include<stdio.h>

int main()
{

    char ch;
    printf("enter charechter :");
    scanf("%c.",&ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("upper case letter \n");

    }

    else if(ch >= 'a' && ch <= 'z')
    {
        printf("lower case letter\n");
    }
    else
    {
            printf("not a english letter");

    }

    return 0;
    
}