// Pattern5
// * * * * * 
// * * * * 
// * * * 
// * * 
// *

// Method 1
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

// method 2
// method2
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i + 1); j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}

//Pattern 6
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1

// method 1
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << (5 - j + 1) << " ";
        }

        cout << endl;
    }

    return 0;
}

// method2 //using connection aka formula
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i + 1); j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}
