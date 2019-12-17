/*  The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

    Find the sum of all the primes below two million.
*/



#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdlib.h>
using namespace::std;

void primeSum()
{
    bool isPrime;
    long long sum = 0;
    for (long long i = 2; i<2000000; i++)
    {
        isPrime = true;
        for (long long j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }


        }
        if (isPrime)
            {
                sum += i;
            }
    }
    cout<<sum;
}

int main()
{
    primeSum();
    return 0;

}
