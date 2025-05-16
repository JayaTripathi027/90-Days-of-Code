// STRINGS
// BASIC STRING INPUT OUTPUT CODE
#include <iostream>
using namespace std;

int main()
{
    char name[20]; // initialising a character array

    cout << "Enter your name" << endl;
    cin >> name; // ip for character array

    cout << "Your name is:" << endl;
    cout << name; // output for character array
    return 0;
}

// function
//  return_type fn_name(argument)
//  {
//       return ans        ---> ans should match the return type
//  }

// GET LENGTH OF THE STRING
#include <iostream>
using namespace std;

int count = 0;
int get_length(char name[20])
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name" << endl;
    cin >> name;

    cout << "Length: " << get_length(name) << endl;
    return 0;
}

//REVERSE OF STRING
#include <iostream>
using namespace std;

//count the length
int count =0;
int get_length(char name[])
{   
    for(int i=0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

//reverse --> swap the first and last element(length-1) 
void rev(char any_name[], int size)
{
    int start = 0;
    int end = size-1; 
    // Swap characters at index 'start' and 'end'
    while(start < end)
    {
        swap(any_name[start++], any_name[end--]);
    }
}

int main() 
{
    char name[20];
    cout << "Enter your name" <<endl;
    cin >> name;
    
    int len = get_length(name);    //calling & storing the length in a variable
    
        rev(name, len);             //calling rev
    
    cout << "Reverse: " << name <<endl;
    return 0;
}
