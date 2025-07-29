// Program to find the largest among 3 numbers
//METHOD - 1
//USING IF ELSE 
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers" << endl;
    cin >> a >> b >> c;

    if (a >> b && a >> c)
        cout << a;

    else if (b >> a && b >> c)
        cout << b;

    else
        cout << c;
    return 0;
}


//METHOD - 2
//USING TERNARY OPERATOR
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, largest;
    cout << "Enter 3 numbers" << endl;
    cin >> a >> b >> c;

    // condition ? exprIfTrue : exprIfFalse
    largest = (a > b && a > c) ? a : ((b > a && b > c) ? b : c);

    cout << "The largest is " << largest << endl;

    return 0;
}
