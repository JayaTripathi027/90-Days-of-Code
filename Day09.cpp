// COUNTING NUMBER OF DIGITS

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;

    int count = 0;
    while (num != 0)
    {
        count++;
        num = num / 10;             // the no. of times it can get divisible by 10, will be the count of digits
    }

    cout << count;

    return 0;
}

// METHOD -2
//THE LOG METHOD

// log base 10 mai jab number dalte hai
// toh uska value mil jata hai which includes decimal also
// fir usmai we add 1 to get the exact count

header : #include<cmath>

int main()
{
    int count = log10(num) + 1;
    cout << count;
}
                