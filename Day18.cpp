//Even Number Odd Number Program
#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    
    //to check if number if even or odd
    if(num % 2 == 0)
        cout << num << " is an even number" << endl;
    
    else
        cout << num << " is an odd number" << endl;
    return 0;
}