//Armstrong Number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int rem = 0, sum = 0;
    int temp = n;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (temp == sum)
    {
        cout << "The number is armstrong" << endl;
    }
    else
    {
        cout << "Not armstrong" << endl;
    }

    return 0;
}

// but the above code will only work for 3digit no. but Armstrong can be of 4digit number also
// Refer the below code
#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main()
{

    // Take the Input
    int n;
    cout << "Enter number" << endl;
    cin >> n;

    // copy the original value
    int temp = n;
    int num = n;

    // count the digits
    int count = 0;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    // calculate armstrong sum
    int rem = 0, sum = 0;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + pow(rem, count);
        num = num / 10;
    }

    // Check if armstrong
    if (n == sum)
        cout << "Armstrong" << endl;

    else
        cout << "Not armstrong" << endl;
    return 0;
}
