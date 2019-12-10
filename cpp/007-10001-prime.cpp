/*  By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

    What is the 10 001st prime number? */


#include <iostream>
using namespace::std;

void prime(long long n)
{
    bool isPrime;
    long long num;
    for (long long i = 2; n > 0 ; i++)
    {
        isPrime = true;
        for (long long j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            num = i;
            n--;
        }

    }
    cout<< num;
}

int main()
{
    long long n;
    cin>>n;
    prime(n);
    return 0;
}
