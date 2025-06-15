//Divisors of a Number
//A number which completely divides another number is called it's divisor
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            cout << i << " ";
    }

    return 0;
}
//TIME COMPLEXITY is O(n)


