//simple bruteforce with time complexity O(n)

#include <iostream>
using namespace::std;


void fun()
{
   int sum=0, a=1, b=2;
   int fib=a+b;
   while(fib<=4000000)
   {
       fib=a+b;
       a=b;
       b=fib;
       if(fib%2==0)
       {
           sum+=fib;
       }

   }
   cout<<sum;
}

int main()
{
    fun();
    return 0;
}
