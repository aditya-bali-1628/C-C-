#include<stdio.h>

//program name is check prime number or not

 int main()
 {

        int n, i, flag = 0;
        printf("enter a positibe integer :");
        scanf("%d\n",&n);

        //0 and 1 are not prime number 
        // change flag to 1 non prime number 
        if(n == 0 || n == 1)
        flag = 1;

        for(i = 2; i <= n / 2; ++i)
        

        //if n is division by i , then n is not prime 
        //change flag to 1 non - prime number
        if( n % i == 0)
            flag = 1;
             
            for(int i = 2; i <= n / 2; ++i)
            {

                // if n is divisible by i , then is not prime number 
                //change flag to 1 for non prime number 
                if(n % i == 0)
                {
                    flag = 1;
                    break;

                }
            }

            //flag is 0 for prime numbers
            if(flag == 0)
            printf("%d is a prime number ,",n);
            else
            printf("%d is not a prime number ,", n);

            return 0;
        
        
        
        
 }