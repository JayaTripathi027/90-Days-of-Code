//GCD or HCF
//for every given two numbers there will always be a gcd aor hcf
//eg: number1: 9 number2: 12
// factors of num1 is : 1, 3, 9   factors of num2: 1, 2, 3, 4, 6, 12
//so here 1 and 3 are common divisors or factors out of which 3 is greatest hence its GCD

// CODE:
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num1, num2, gcd = 1;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    int limit = min(num1, num2);

    for (int i = 1; i <= limit; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }

    cout << gcd;
    return 0;
}

// EXPLANATION
// we run min(n1,n2)
// gcd ke liye count will start from i=1 upto the min of n1,n2
// we want factors of both the numbers and out of which, the greatest one will be become gcd
// we check for every number and if a number divides both of them just replace that with gcd's answer
// the largest number that we get that divides both of them, will be my gcd

// time Complexity is o(n)
// we loop from 1 to min(num1, num2) and check which numbers divide both.


//METHOD2 --> REVERSE LOOP (OPTIMISED)
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num1, num2, gcd = 1;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    int limit = min(num1, num2);

    for (int i = limit; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
    }

    cout << "GCD = " << gcd << endl;
    return 0;
}

// Why reverse loop helps:
// If you did a forward loop like i = 1 to limit, you'd find small divisors first like 1, 2, etc. 
// You’d still find the GCD, but only after checking every single value. That’s less efficient.
// With the reverse loop :
// As soon as the largest common divisor is found,we stop ✅