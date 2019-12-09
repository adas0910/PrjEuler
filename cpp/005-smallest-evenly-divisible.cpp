/*  2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?   */



#include <iostream>
#include <stdlib.h>
using namespace::std;


int greatestCommonDiv(int a , int b)
{
   if(b==0)
    return a;
   a%=b;
   return greatestCommonDiv(b,a);
}

void smallestEvenlyDiv()
{
    long long num = 1;
    int i = 1;
    while(i < 21)
    {
        num = (num * i) / (greatestCommonDiv(num, i));
        i++;
    }
    cout<<num;
}

int main()
{
    smallestEvenlyDiv();
    return 0;
}
