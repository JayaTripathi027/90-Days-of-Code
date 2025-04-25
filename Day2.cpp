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
Refer the below code
#include <iostream>
#include <cmath> // For pow() function
    using namespace std;

int main()
{
    int num, rem, sum = 0;
    cin >> num;

    int temp = num;
    int count = 0; // To store the number of digits

    // Step 1: Count the number of digits
    int n = num;
    while (n != 0)
    {
        count++;
        n /= 10;
    }

    // Step 2: Calculate Armstrong sum
    n = num; // Reset n to original number
    while (n != 0)
    {
        rem = n % 10;
        sum += pow(rem, count); // Raise to the power of 'count'
        n /= 10;
    }

    // Step 3: Check if Armstrong number
    if (sum == temp)
        cout << "Armstrong" << endl;
    else
        cout << "Not an Armstrong" << endl;

    return 0;
}
