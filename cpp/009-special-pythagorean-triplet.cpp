/*  A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

    a^2 + b^2 = c^2
    For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

    There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    Find the product abc.
*/






#include <iostream>
using namespace::std;


void pythTriplet()
{
    int a, b, c, product;
    for (a = 3; a < 500; a++)
    {
        for (b = a++; b < 500; b++)
        {
            c = 1000 - b - a;
            if ( (a * a + b * b) == c * c)
                product = a * b * c;
        }
    }
    cout<<product;

}

int main()
{
    pythTriplet();
    return 0;
}
