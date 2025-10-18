// Pattern 3
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5

// without using function
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

//Using Function
#include <iostream>
using namespace std;

void Pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cout << "Enter number";
    cin >> num;

    Pattern3(num); // calling the function

    return 0;
}

// Pattern 4
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

