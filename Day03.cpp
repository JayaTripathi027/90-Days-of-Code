// FIND IF SUM OF DIGITS OF NUMBER IS PALINDROME OR NOT
#include <iostream>
using namespace std;

int main()
{
    // Take input
    int n;
    cout << "Enter number" << endl;
    cin >> n;

    // storing the original values
    int temp = n;
    int num = n;

    // to calculate the sum of digits we use temp
    int rem = 0, sum = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem);
        temp = temp / 10;
    }

    cout << "Sum: " << sum << endl;

    // calculating whether the sum to see if its palindrome or not
    // first we store the sum in  a variable
    int temp1 = sum;

    int rev = 0;
    while (temp1 != 0) // using temp1 to get the rev
    {
        int remainder = temp1 % 10;
        rev = (rev * 10) + remainder;
        temp1 = temp1 / 10;
    }
    cout << "Reverse " << rev << endl;

    // checking if the sum is a palindrome or not
    if (rev == sum)
        cout << "Palindrome" << endl;

    else
        cout << "Not Palindrome" << endl;

    return 0;
}
