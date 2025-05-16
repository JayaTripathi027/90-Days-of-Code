//CHECK WHETHER GIVEN STRING IS PALINDROME OR NOT

// CODE
// METHOD1  --> reverse to check 
// CHECK WHETHER GIVEN STRING IS PALINDROME OR NOT
#include <iostream>
#include <cstring>
using namespace std;

void is_palindrome(char str[20], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}
// we get the reverse
int main()
{
    char str[20];
    cout << "Enter string" << endl;
    cin >> str;

    // for length
    int length = strlen(str);

    // another char array for reverse string
    char rev_str[20];
    strcpy(rev_str, str); // copy the original string

    // call the rev string function
    is_palindrome(str, length);
    cout << "Reversed string: " << str << endl;

    // Check whether it is palindrome or not
    if (strcmp(rev_str, str) == 0)
    {
        cout << "String is palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}


// PROBLEM 1:
//  In your is_palindrome() function, you are reversing the original str directly.
//  So after reversing, str becomes the reversed string itself — you lose the original string!

// You need:
// to keep the original string unchanged.
// to make a copy, reverse the copy, and then compare.

// PROBLEM 2:
//  In your if(str == rev_str), you are comparing two arrays (char[]) directly using ==, 
// but in C++ you cannot directly compare character arrays like that.
//  C++ does not allow direct array comparison like integers. You must use strcmp() from <cstring> to compare two strings.

// OR, you can manually compare characters one by one.


//METHOD 2  --> comparing the strings

#include <iostream>
#include <cstring>
using namespace std;

// function for palindrome
// a string is palindrome if its characters are similar from front and end

// string is not case sensitive, so tranforming all the strings in one format
// Transforming strings from upper to lower case
char to_lower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;

    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// can be done to upper case also
//  ch - 'a' + 'A';

// here we compare if start and end characters are same or not
bool is_palindrome(char str[20], int size)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        if (to_lower(str[start]) != to_lower(str[end]))
            return 0;

        else
            start++, end--;
    }
    return 1; // agar loop pura complete hua means its a palindrome
}

int main()
{
    char str[20];
    cin >> str;

    cout << "Entered String: " << str << endl;

    // to get the length of string
    int len = strlen(str);
    cout << "Length: " << len << endl;

    // call the is_palindrome function
    cout << "Palindrome or not: " << is_palindrome(str, len) << endl;

    // to check
    //  cout << "Character: " << to_lower('b') << endl;
    //  cout << "Character: " << to_lower('B') << endl;

    return 0;
}
