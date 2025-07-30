// How to Create a Simple Calculator using C++ Programming Language
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter the operator (+ - * /) :";
    cin >> op;

    cout << "Enter the numbers" << endl;
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << op << num2 << " = " << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 << op << num2 << " = " << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 << op << num2 << " = " << num1 * num2 << endl;
        break;

    case '/':
        if (num2 == 0)
            cout << "Divide by zero situation" << endl;
        else
            cout << num1 << op << num2 << " = " << num1 / num2 << endl;
        break;

    default:
        cout << "invalid operator" << endl;
    }

    return 0;
}