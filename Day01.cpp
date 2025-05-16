// PALINDROME NUMBER
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int temp = n; // storing in a temp variable for comparision
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

    if (rev == temp)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }
    cout << rev;
    return 0;
}
