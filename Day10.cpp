// REVERSE OF AN INTEGER
// Reverse a number ensuring that reversed number has no leading zero 
// Its to confuse zero automatic abstract hojata hai
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be reversed" << endl;
    cin >> n;

    int rev = 0;
    while (n != 0)
    {
        int remainder = n % 10;

        if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10))
        {
            return 0;
        }
        rev = (rev * 10) + remainder;
        n = n / 10;
    }
    cout << rev;
    return 0;
}

// EXPLAIN:
// Reason for Checking Before:

// Preventing Overflow/Underflow:

// When you perform the multiplication and addition operations (rev * 10 + digit), 
// if the value of rev is already near the maximum or minimum limit of an integer, 
// this operation can cause an overflow or underflow.
// By checking rev before the operation, you can ensure that the operation won't exceed 
// the bounds of an integer.