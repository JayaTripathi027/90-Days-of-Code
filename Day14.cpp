//GCD or HCF
//The Euclidean algorithm 
// Theory: A method for efficiently finding the greatest common divisor (GCD) of two integers. 
//It does this without needing to factor the numbers. 
//The algorithm works by repeatedly applying division with remainder until the remainder is zero. 
//The last non-zero remainder is the GCD.

// Code:
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter numbers" << endl;
    cin >> a >> b;

    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;

        else
            b = b % a;
    }

    if (a == 0)
        cout << "GCD is: " << b;

    else
        cout << "GCD is: " << a;
    return 0;
}

// TIME COMPLEXITY is O(log base phi(min(a,b)))
//  why log: whenver there is division happening, the number of iteration will be in terms of log n
// why phi bcoz usually its n/10 toh base 10 but here the value of denominator is changing

//we do greater % smaller, thats the logic and we go on till one of them is zero 
//and the if one of them is zero then the other one is the gcd  