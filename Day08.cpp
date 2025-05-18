// METHOD2: OPTIMISED SOLUTION

// PRIME NUMBER OR NOT
//  check whether given number is prime or not

// for a number to be prime it has to follows these condition
// RULE 1: NUMBER DIVISIBLE BY 1
// RULE 2: NUMBER DIVISIBLE BY ITSELF
//  here if we consider 1, it follows the above 2 rules but its not a prime number
//  so RULE 3: TOTAL NUMBER OF DIVISORS = 2

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, count = 0;
    cin >> num;

    int rt = sqrt(num); // taking sq root of number
    for (int i = 1; i <= rt; i++)
    {
        if (num % i == 0) // if divisible then get in loop

        {
            if (num / i == i)
                count++;

            else
                count += 2;
        }
    }

    cout << "Count is: " << count;
    if (count == 2)
        cout << "Prime" << endl;

    else
        cout << "Not Prime" << endl;
    return 0;
}

// explanation:  if(num/i == i)
                    count++;
                else 
                    count += 2;
// If i is a divisor of num, then there are usually two factors: i and num/i.
// But if i == num/i (i.e., both are same, like in perfect squares), we count it only once.
// So check if i == num/i → count once; else → count both i and num/i.
