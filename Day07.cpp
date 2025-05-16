//PRIME NUMBER OR NOT
// check whether given number is prime or not

// for a number to be prime it has to follows these condition
// RULE 1: NUMBER DIVISIBLE BY 1
// RULE 2: NUMBER DIVISIBLE BY ITSELF
//  here if we consider 1, it follows the above 2 rules but its not a prime number
//  so RULE 3: TOTAL NUMBER OF DIVISORS = 2

//Method 1
#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter a number" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }

    if (count == 2)
        cout << "Number is a prime number" << endl;

    else
        cout << "Number is a composite number" << endl;

    return 0;
}

// Method1: Using Function
#include <iostream>
using namespace std;

int count = 0;
int check_prime(int n)
{
    for (int i = 1; i <= n; i++) // a loop to check if num is divisible with other numbers or not
    {
        if (n % i == 0)
            count++;
    }

    return count;
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    check_prime(num); // calling the function
    if (count == 2)
        cout << "Number is a prime number" << endl;

    else
        cout << "Number is a composite number" << endl;

    return 0;
}


