//
//  main.cpp
//  Challange
//
//  Created by Kwang Un Jin on 12. 3. 31..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#include <iostream>

using namespace std;


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

//new change
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
// get PrimeFactors using tail recursion
void getPrimeFactors(int num, int div)
{
    if(div <=1 )
        div = 2;
 
    if(num == 1)
        return;
    else if(isPrime(num))
    {
        cout << num;
        return;
    }
    else if( num == div )
        return;
        
    else if (num % div == 0)
    {
        num = num / div;
        cout << div << endl;
    }    
    
    getPrimeFactors(num, ++div);
}


int main(int argc, const char * argv[])
{
 
    //cout << factorial2(4, 1);
    getPrimeFactors(64, 1);
    return 0;
}

