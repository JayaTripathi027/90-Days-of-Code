//Factorial of number
// 5! = 5*4*3*2*1 = n*(n-1)*(n-2)*(n-3)*(n-4)

//Using For Loop

//Code:
#include <iostream>
using namespace std;

int main() 
{
    int num, factorial = 1;
    cin >> num;
    
    if(num < 0)
        cout << "Factorial for negative no. doesnt exist" <<endl;
        
    else if(num <= 1)
        cout << "Factorial is: " << factorial << endl;
        
    else
    {
        for(int i = num; i >=2; i--)
        {
            factorial = i * factorial;
        }
            
            cout << "Factorial is: " << factorial << endl;
    }
    
    return 0;
}

// Note:
// Factorial of 0 is 1, factorial of 1 is also 1
// Factorial of negative number does not exists