//Find the sum of all multiples of 3 or 5 below 1000

#include <iostream>
using namespace::std;

void sum()
{
    int sum=0;
    int i=3;
    while(i<1000)
    {
        if(i%3==0 || i%5==0)
            sum+=i;
        i++;
    }
    cout<<sum;
}

int main()
{
    sum();
    return 0;
}
