//
//  mymath.cpp
//  Challange
//
//  Created by Kwang Un Jin on 12. 4. 11..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#include "mymath.h"



// tail recursion factorial
int factorial2(int in, int acc)
{
    if(in == 0)
        return 1;
    else if (in == 1)
        return acc;
    else 
        return factorial2 (in - 1, in * acc);
    
}



int isPrime(int num)
{
    int div = num;
    if(num == 1 || num == 2)
        return 1;
    else {
        while (div > 2)
            if(num % --div == 0)
                return 0;
    }
    
    return 1;
}

// 1. 최소의 약수로 나눈다 52 / 2 = 26
// 2. 나눈것을 다시 1로 반복 26 / 2 = 13
// 3. 나눈게 소수가 될때 까지 반복한다.
// get PrimeFactors using tail recursion
void getPrimeFactors(int num)
{
    int d = 2;
    while (d < num)
    {
        if ( num % d == 0)
        {
            printf("%d \t", num / d);
            break;
        }
        else 
        {
            d ++;   
        }
    }
    
    if (isPrime(num / d))
    {   
        printf("asdf");
        return;
    }
    else 
        getPrimeFactors(num / d);
}


