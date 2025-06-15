// Divisors of a Number
// OPTIMISED METHOD
// METHOD 2
// Using the square root method
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm> // for sorting
using namespace std;

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    vector<int> divisors; // vector of data type int name: divisor initialised for storing divisors

    int rt = sqrt(num); // taking sq root of number

    for (int i = 1; i <= rt; i++)
    {
        if (num % i == 0)
        {
            divisors.push_back(i); // storing factor in vector               (dynamic list)

            if (num / i != i)
            {
                divisors.push_back(num / i); // storing other factor
            }
        }
    }

    // sorting the list
    sort(divisors.begin(), divisors.end());

    // This gives us factors but not in a sorted order
    // we use the list data structure in java and in c++ vector for undefined size(dynamic size)
    // once we store it we sort and print it

    // processing Done now Printing the divisors
    cout << "Divisors: ";
    for (int d : divisors)
    {
        cout << d << " ";
    }

    return 0;
}

