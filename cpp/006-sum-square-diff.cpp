/*  The sum of the squares of the first ten natural numbers is,

    12 + 22 + ... + 102 = 385
    The square of the sum of the first ten natural numbers is,

    (1 + 2 + ... + 10)2 = 552 = 3025
    Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>
using namespace::std;

long squareSum(int n)
{
    int i = 1;
    long long sum = 0;
    while(i < 101)
    {
        sum = sum + (i * i);
        i++;
    }
    return sum;
}

long sumSquare(int n)
{
    int i = 1;
    long long sum = 0;
    while(i < 101)
    {
        sum = sum + i;
        i++;
    }
    sum *= sum;
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<sumSquare(n) - squareSum(n);
    return 0;
}
