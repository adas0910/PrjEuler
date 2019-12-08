//the largest prime factor of the number 600851475143

/*
  Prime numbers: A number divisible only by 1 and the number itself

  Every number greater than 1 has a distinct or unique set of prime factors
  This means that when divided by a prime number, if the quotient is not a
  prime number then it can be divided again by prime numbers until we have
  the required set of prime factors. For example 18 = 2 x 9 = 2 x 3 x 3   */

#include <iostream>
using namespace::std;


void largestFactor(long long num)
{
    long fact = 0;
    int counter = 2;

    //we only need to check till the square root of the number
    while(counter * counter <= num)
    {
        if(num % counter == 0)
        {
            num /= counter;
            fact = counter;
        }
        else
        {

            if (counter == 2)
                counter = 3;
            else
                counter +=2;
        }
    }
    //remainder is the other factor
    if(num > fact)
        fact = num;
    cout<<fact;
}

int main()
{
    long long n;
    cin>>n;
    largestFactor(n);
    return 0;
}

