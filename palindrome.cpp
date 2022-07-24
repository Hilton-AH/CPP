#include <iostream>
#include <string>
using namespace std;

//function that takes a string and returns a boolean value if the string is a palindrome

bool isPalindrome(string str)
{
    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (isPalindrome(str))
    {
        cout << "The string is a palindrome.\n";
    }
    else
    {
        cout << "The string is not a palindrome.\n";
    }
    return 0;
}