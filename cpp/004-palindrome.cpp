/* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
   Find the largest palindrome made from the product of two 3-digit numbers. */

    //largest product of two 3-digit number is 999 * 999 = 998001
    //largest palindrome smaller than 998001 is 99799
    //smallest produce of two 3-digit number is 100 * 100 = 10000
    //smallest palindrome greater than 10000 is 10001
    //therefore we need to check for all palindromes between these two digits

#include <stdlib.h>
#include <iostream>
using namespace::std;

int product(long);

int palindrome()
{
    long high = 998001;
    long rev;
    long num;


    while(high >= 10001)
    {
        num = high;
        rev = 0;
        while(num > 0)
        {
            rev = (rev * 10) + (num % 10);
            num /= 10;
        }
        if(high == rev)
        {
           product(high);
        }
        high--;
    }
}

int product(long num)
{

    for(int i = 100; i<1000; i++)
    {
        for(int j = 100; j<1000; j++)
        {
            if((i * j) == num)
            {
                cout<<num;
                exit(0);
            }
        }

    }


}




int main()
{

    palindrome();
    return 0;
}
