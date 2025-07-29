// Program to Print Multiplication Table of a Number

#include <iostream>
using namespace std;

int main() 
{
    int num, ans;
    cout << "Enter number" <<endl;
    cin >> num;
    
    for(int i=1; i<= 12; i++)
    {
        ans = num*i;
        cout << num << " * " << i << " = " << ans <<endl;  
    }
    return 0;
}