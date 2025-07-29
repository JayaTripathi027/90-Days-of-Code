// Program to Find the Area of a Circle using Radius
#include <iostream>
using namespace std;

int main()
{
    float radius, area;
    const float PI = 3.14159;

    cout << "Enter radius" << endl;
    cin >> radius;

    area = PI * radius * radius;
    cout << "Area is " << area;
    return 0;
}

// math.h in C language

//Method2
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float area, radius;

    cout << "Enter radius" << endl;
    cin >> radius;

    area = M_PI * radius * radius;
    cout << area;
    return 0;
}

// why use M_PI instead of typing 3.14 manually?
// The "M" stands for "Math", and "PI" stands for π (pi).
// It is a predefined macro in C/C++ (when supported) that represents the value of π:
//  M_PI = 3.14159265358979323846
