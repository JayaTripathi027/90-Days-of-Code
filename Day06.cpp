// VALID PALINDROME
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters 
// and removing all non-alphanumeric characters, it reads the same forward and backward.
// Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.

// Example 1:
// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.

//SOLUTION
// 3 things we know
// removing all non-alphanumeric characters
// convert all uppercase to lowercase
// check whether its palindrome or not

class Solution
{
public:
    // step1
    // valid string ko aage pass karenge
    // this valid string will be stored in
    bool valid_str(char s)
    {
        if ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z') || (s >= '0' && s <= '9'))
            return 1;

        else
            return 0;
    }

    // step3
    // coverting all uppercase to lowercase

    char to_lower(char s)
    {
        if ((s >= 'a' && s <= 'z') || (s >= '0' && s <= '9')) // if its a number or smallcase aphabets, return as it is
            return s;

        else
        {
            char temp = s - 'A' + 'a';
            return temp;
        }
    }

    // step5
    // check whether palindrome or not
    bool is_palindrome(string s)
    {
        int start = 0, end = s.length() - 1;
        while (start < end)
        {
            if (s[start] != s[end])
                return 0;

            else
                start++, end--;
        }
        return 1;
    }

    // checking whether palindrome or not
    bool isPalindrome(string s)
    {
        // step2
        // storing the valid string in a variable
        string temp = "";
        for (int j = 0; j < s.length(); j++)
        {
            if (valid_str(s[j]))
            {
                temp.push_back(s[j]); // now we have string with all valid alphabets
            }
        }

        // step4
        // converting all the valid alphabets to lowercase
        for (int j = 0; j < temp.length(); j++)
        {
            temp[j] = to_lower(temp[j]); // put each jth term of temp string to lowercase funt
        }
        // all got converted to lowercase

        // step6
        // call the is_palindrome function for temp
        // temp now has all valid strings in lowercase
        return is_palindrome(temp);
    }
};
