// Fibonacci Series
// 0 1 1 2 3 5 8 13 21
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter terms of fibonacci sequence" << endl;
    cin >> num;

    int a = 0, b = 1;

    if (num >= 1)
        cout << a << " ";

    if (num >= 2)
        cout << b << " ";

    for (int i = 3; i <= num; i++)
    {
        int c = a + b;
        cout << c << " ";

        // Shifting the elements
        a = b;
        b = c;
    }

    return 0;
}