// PATTERN 1
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *
// WITHOUT USING FUNCTION
#include <iostream>
using namespace std;

int main() 
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout << "*" << " "; 
        }
        cout << endl;
    }
    return 0;
}

// USING FUNCTION 
#include <iostream>
using namespace std;

void printPattern1(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << "*" << " "; 
        }
        cout << endl;
    }
}
int main() 
{
    int num;
    cin >> num;
    printPattern1(num);
    return 0;
}

// PATTERN 2 
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

#include <iostream>
using namespace std;

void printPattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main()
{
    int num;
    cin >> num;
    printPattern1(num);

    return 0;
}

