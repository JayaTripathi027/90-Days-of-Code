//Factorial of Number
//using Function (Recursive method)

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    if (n == 0 || n == 1) // giving condition for 0 or 1
        return 1;

    else
    {
        for (int i = n; i >= 2; i--)
        {
            fact = fact * i;
        }

        return fact;
    }
}
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    // call the function
    int ans = factorial(num); // store it in a variable

    // display
    cout << "Factorial of number is: " << ans << endl;
}